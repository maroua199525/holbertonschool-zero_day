#include<signal.h>
#include "shell.h"
/**
 *main - main function
 *Return: Always(0);
 */ 

int main()
{
  char *cmd;  /* la difference char *cmd (segmauntation fault)*/
  /*(void)ac*/;
  int i = 0, k;
  char *line, **command;
  char *env[] = {"PATH=/bin", NULL};
  cmd = malloc (sizeof(char) * SIZE + 1);
  if (cmd == NULL)
    return (-1);
 
  while (i < 1)
    {
    if (isatty(STDIN_FILENO))
    {
      printf("$ ");
    }
    signal(SIGINT,sig_handler); // Register signal handler
    for(int i=1;;i++){    //Infinite loop
      printf("%d : Inside main function\n",i);
      sleep(1);  // Delay for 1 second
    }
      line = _readline();
      command = parse_line(line);
      if (fork() != 0)
	wait(&k);
      else
      {
	_strcpy(cmd ,"/bin/");
	/*printf("%s\n", cmd);
	  /*printf("%s\n",*/
	_strcat(cmd, command[0]);
	execve(cmd, command, env);
      }
      if (_strcmp(*command, "exit") == 0)
	break;
    
  } 
    
  return (0);
}
