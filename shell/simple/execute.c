#include "shell.h"
/**
 * exec_cmd - execve the comands from line.
 * @cmd: Command to execute.
 * Return: 0.
 */

int exec_cmd(char *cmd, char **argv)
{
	pid_t pid;
	int status;
	
	printf("command in excute = %s\n",cmd);
	if (cmd == NULL || argv[0] == NULL)
 	{
		return (-1);
 	}
	pid = fork();
	if (pid == 0)
	{
		/* Child process */
		if (execve(cmd, argv, environ) == -1)
		{
			perror("hsh");
			exit(0);
			return (-1);
		}
	}
	else if (pid == -1)
	{
		perror("forking failed");
		exit(-1);
		return (-1);
	}
	else
	{
	/* Parent process */
		waitpid(pid, &status, WUNTRACED);
	}
return (0);
}

