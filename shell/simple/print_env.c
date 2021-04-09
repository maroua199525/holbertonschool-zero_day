#include "shell.h"
void sig_handler(int signum){

  if (signum == SIGINT)
    {
      write(STDOUT_FILENO, "\n$ ", 3);
     
    }
  //Return type of the handler function should be void
}

void print_env(char **environ)
{
  char **str;
  str = environ;

  int len, i = 0;

  while (str[i] != NULL)
    {
      len = strlen(str[i]);
      write(STDOUT_FILENO, str[i], len);
      write(STDOUT_FILENO, "\n", 1);
      i++;
    }
}

/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	PRINTER("$ ");
}