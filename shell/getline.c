#include "shell.h"
#include <string.h>
/**
 *_readline - read a line from insert
 *Return: void
 */
void *_readline(char *cmd, char **opt)
{

        char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int i = 0, j = 0;
	char *token, **array;
       
	/*array = malloc(len * sizeof(char*) + 1);
	if (array == NULL)
	  return;*/
	read = getline(&line, &len, stdin);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}

	token = strtok(line, " \n");
	while (token != NULL)
	{
	  array[i++] = _strdup(token);
	 token = strtok(NULL, " \n");
	}
	_strcpy (cmd, array[0]); 
	while (j < i)
	{
	  opt[j] = array[j];
	  j++;
	}
	opt[i] = NULL;
}
