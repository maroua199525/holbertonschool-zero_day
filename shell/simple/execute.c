#include "shell.h"
/**
 * exec_cmd - execve the comands from line.
 * @array: Command to execute.
 * Return: 0.
 */

int exec_cmd(char **array)
{
	pid_t pid;
	int status;

	if (array == NULL || array[0] == NULL)
	{
		return (-1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("error");
		return (-1);
	}
	if (pid == 0)
	{
		 execve(array[0], array, NULL);
	}
		else
		{
			wait(&status);
		}
	
	return (0);
}

