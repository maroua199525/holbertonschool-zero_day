#include "shell.h"
/**
 *main - main function
 *Return: Always(0)
 */ 

int main(void)
{
  
  int status = 1, blt = -1;
  char *line = NULL, **argv;
  /*signal(SIGINT, sig_handler);*/
  signal(SIGINT, sig_handler);
  while (status)
    {
    if (isatty(STDIN_FILENO))
    {
      prompt();
    } 
      line = _readline();
      if (line[0] == '\n' )
      {
        free(line);
        continue;
      }
      argv = parse_line(line, DELIMIT);
     /* if (_strcmp(argv[0], "exit") == 0)
		{
        break;
		}*/
      
        blt = check_builtin(argv);
        if (blt == 1)
        {
          return (fun_builtin(argv));
        }
      
	      /*else 
        {
         if (stat(argv[0], &st) != 0)
    
          
          
    path_command(argv);
        
      
    }*/
    }
    free(line);
    free_array(argv);
  return (0);
}

