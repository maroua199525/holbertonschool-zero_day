#include "shell.h"
#include <string.h>
/**
 *_readline - read a line from insert
 *Return: line
 */
char *_readline(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	
	read = getline(&line, &len, stdin);
	if (read == -1)
	{
		free(line);
		perror("hsh");
		exit(EXIT_SUCCESS);
	}
	return (line);
}
/**
*free_array - free an array
*@str : an array of pointrs
*Return: void
*/
void free_array(char **str)
{
	int i = 0;

	while (str[i] != NULL)
	{
		free(str[i]);
	}
	free(str);
}
