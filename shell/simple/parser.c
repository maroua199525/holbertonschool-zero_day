#include "shell.h"

/**
* parse_line - parses the input
* @line: string
*@DELIMIT: the delimet
*Return: array of string
*/
char **parse_line(char *line, char *delim)
{
	char **array;
	char *token;
	int i = 0, len = SIZE;

	if (line == NULL)
		return (NULL);
	array = malloc(sizeof(char *) * len);
	if (array == NULL)
	{
		write(STDERR_FILENO, "error\n", 6);
		exit(EXIT_FAILURE);
	}

	token = strtok(line, delim);
	while (token != NULL)
	{
		array[i++] = token;
		token = strtok(NULL, delim);
	}
	array[i] = NULL;

	return (array);
}
