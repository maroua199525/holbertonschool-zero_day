#include "shell.h"
/**
 * _process - execve example
 *
 * Return: void
 */
void _process(void)
{
    char *argv[] = {"/bin/ls", "-l", ".", NULL};

    while (i < 5)
    {
	id = fork();
    	if (id == 0)
    	{
		execve(argv[0], argv, NULL)
    	}
    	else
    	{
		wait(&status);
    	}	
    	i++;
    }

}
