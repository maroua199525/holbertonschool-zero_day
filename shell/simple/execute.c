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
		if (execve(array[0], array, NULL) == -1)
		{
			write(1, "hsh: ", 5);
			/*print_number(count);*/
			write(1, ": ", 2);
			write(1, array[0], _strlen(array[0]));
			write(1, ": not found\n", 13);
			free_array(array);
			exit(127);
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}

