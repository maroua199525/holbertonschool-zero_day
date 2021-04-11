#include "shell.h"
/**
 * check_builtin - check if the command passed is a builtin
 * @command: string to check
 *Return: -1 on failure 1 on success
 */


int check_builtin(char **command)
{
		int i = 0;
		built_in built[] = {
						{"exit", NULL},
						{"cd", NULL},
						{"env", NULL},
						{NULL, NULL}
};

if (*command == NULL)
{
	return (-1);
}
while ((built + i)->cmd)
{
	if (_strcmp(command[0], (built + i)->cmd) == 0)
	{
		return (1);
	}
		i++;
}

	return (-1);
}

/**
 * fun_builtin - return the function of the command bultin passed
 * @command: string to return for it the function
 *Return: int
 */

int fun_builtin(char **command)
{
		int i = 0;
		built_in built[] = {
						{"env", print_env},
						/*{"cd", change_dir},*/
						{NULL, NULL}
};
	while ((built + i)->cmd)
	{
		if (_strcmp(command[0], (built + i)->cmd) == 0)
		{
			return ((built + i)->fun(command));
		}
		i++;
	}

	return (-1);
}
/**
* print_env - prints all the environment variables
*@environ: global variable
*Return: 0
*/

int print_env(char **environ)
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
			new_dir  = (getenv("HOME"));
			result = chdir(new_dir);  /* chdir() returns zero (0) success*/
		}
		else if (_strcmp(cmd[1], "-") == 0)
		{
			new_dir = (getenv("OLDPWD"));
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
