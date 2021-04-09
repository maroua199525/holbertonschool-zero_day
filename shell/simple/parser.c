#include "shell.h"
#include <string.h>

char **parse_line(char *line, char *DELIMIT)
{
  char **array;
  char *token;
  int i = 0, len = SIZE;

  if (line == NULL)
    return (NULL);
  array = malloc(sizeof(char *) * len);
  if (array == NULL)
    {
      write(stderr, "error\n", 6);
      exit(EXIT_FAILURE);
    }

  token = strtok(line, DELIMIT);
  while(token != NULL)
    {
      array[i++] = token;
      token = strtok(NULL, DELIMIT);
      token = strtok(NULL, DELIMIT);
    }
  array[i] = NULL;

  return (array);
}
