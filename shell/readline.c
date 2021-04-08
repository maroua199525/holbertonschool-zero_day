#include "shell.h"
#include <string.h>
/**
 *_readline - read a line from insert
 *Return: void
 */
char *_readline(void)
{

        char *line = NULL;
	size_t len = 0, i;
	ssize_t read;
	

	read = getline(&line, &len, stdin);
	if (read == -1)
	{
	        free(line);
		perror("Error:");
		exit(EXIT_SUCCESS);
	}
	/*if (line[read - 1] == '\n' || line[read - 1] == '\t')
	  line[read - 1] = '\0';
	for (i = 0; line[i]; i++)
	  {
	    if (line[i] == '$' && line[i - 1] == ' ')
	      {
		line[i] = '\0';
		break;
	      }
	      }*/

	return (line);
}
