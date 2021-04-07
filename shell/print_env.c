#include "shell.h"
#include <string.h>
extern char **environ;
void print_env(char **environ);
int main()
{
  print_env(environ);
  return (0);
}


void print_env(char **environ)
{
  char **str;
  str = environ;

  int len, i = 0;

  while (str[i] != NULL)
    {
      len = _strlen(str[i]);
      write(STDOUT_FILENO, str[i], len);
      write(STDOUT_FILENO, "\n", 1);
      i++;
    }
}
