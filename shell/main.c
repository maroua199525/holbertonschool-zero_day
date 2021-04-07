#include "shell.h"
/**
 *main - main function
 *Return: Always(0);
 */ 

int main()
{
  
  int i = 0, k = 0;
  char cmd[100], command[100], *parameters[20];
  char *env[] = {"PATH=/bin", NULL};
  while (i < 1)
  {
    
      printf("$ ");
      _readline(command, parameters);
      if (fork() != 0)
	wait(&k);
      else
      {
	_strcpy(cmd ,"/bin/");
	_strcat(cmd, command);
	execve(cmd, parameters, env);
      }
  }
  return (0);
}
