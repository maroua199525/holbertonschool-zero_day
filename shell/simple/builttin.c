#include "shell.h"

/**
 * check_builtin - check if the command passed is a builtin
 * @command: string to check
 *Return: -1 on failure 1 on success
 */

int fun_builtin(char **command)
{
	int blt = 0;

	if (_strcmp(command[0], "exit") == 0)
	{
		if (command[1] == NULL)
		{
			/*free_array(command);*/
			exit(0);
		}
	}
	if (_strcmp(command[0], "env") == 0)
	{
		blt = print_env();
		return (blt);
	}
	if (_strcmp(command[0], "cd") == 0)
	{
		
		return (change_dir(command));
	}
	return (0);
}
/**
* print_env - prints all the environment variables
*Return: 0
*/

int print_env(void)
{
	char **str;
	int len, i = 0;

	str = environ;
	while (str[i] != NULL)
	{
		len = strlen(str[i]);
		write(STDOUT_FILENO, str[i], len);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
		return (0);
}

/**
 *change_dir - change directory
 *cmd: string
 *Return: 0 on success -1 on fail
 */
int change_dir(char **cmd)
{
		char *new_dir;
		char cwd[PATH_MAX];
		int result = 0;

		if (cmd[1] == NULL)
		{
			new_dir  = (_getenv("HOME"));
			result = chdir(new_dir);  /* chdir() returns zero (0) success*/
		}
		else if (_strcmp(cmd[1], "-") == 0)
		{
			new_dir = (_getenv("OLDPWD"));
			result = chdir(new_dir);
		}
		else
		{
			result = chdir(cmd[1]);
		}
		if (result == -1)
		{
			perror("hsh");
			return (-1);
		}
		else
		{
			getcwd(cwd, sizeof(cwd));
		}
		return (0);
}
int check_builtin(char *argv)
{
		int i = 0;
		char *command[3];
		command[0] = "exit";
		command[1] = "env";
		command[2] = "cd";	

if (*command == NULL)
{
	return (-1);
}
while (i < 3)
{
	if (_strcmp(argv, command[i]) == 0)
	{
		return (1);
	}
		i++;
}

	return (-1);
}
