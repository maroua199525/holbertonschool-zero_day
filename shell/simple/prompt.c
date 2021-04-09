#include<signal.h>
#include "shell.h"
/**
 *main - main function
 *Return: Always(0);
 */ 

int main(__attribute__((unused)) int argc, char **argv)
{
  char *cmd;  /* la difference char *cmd (segmauntation fault)*/
  /*(void)ac*/;
  int status = 1, fn = 0;
  char *line, **command;
  /*signal(SIGINT, sig_handler);*/
  signal(SIGINT, sig_handler);
  while (status)
    {
    if (isatty(STDIN_FILENO))
    {
      prompt();
    } 
      line = _readline();
      if (line[0] != '\0')
        command = parse_line(line, DELIMIT);
    if (_strcmp(command[0], "exit") == 0)
		{
        break;
		}
	else if (check_builtin(cmd) == 1)
  {
        fn = fun_builtin
  }
  else{
    
  }
    
    
  
    
  return (0);
}
