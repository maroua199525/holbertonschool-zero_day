#include "shell.h"
/*
 *_readline - read a line from insert
 *Return: void
 */
void *_readline(void)
{

	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	read = getline(&line, &len, stdin);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}
	return (line);
}
