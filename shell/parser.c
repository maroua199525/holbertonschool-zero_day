#include "shell.h"
#include <string.h>

char **parse_line(char *line)
{
  char **array;
  char *token;
  int i = 0, len = SIZE;

  if (line == NULL)
    return (NULL);
  array = malloc(sizeof(char *) * len);
  if (array == NULL)
    {
      return (NULL);
    }

  token = strtok(line, " \n");
  while(token != NULL)
    {
      array[i++] = token;
      token = strtok(NULL, " \n");
    }
  array[i] = NULL;

  return (array);
}
