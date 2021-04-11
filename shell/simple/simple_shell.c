#include "shell.h"
/**
 *main - main function
 *Return: Always(0)
 */ 

int main(void)
{
  
  int status = 1;
  char *line, **argv;
  struct stat st;
  /*signal(SIGINT, sig_handler);*/
  signal(SIGINT, sig_handler);
  while (status)
    {
    if (isatty(STDIN_FILENO))
    {
      prompt();
    } 
    }
      line = _readline();
      argv = parse_line(line, " \t\r\n\a");
     /* if (_strcmp(argv[0], "exit") == 0)
		{
        free(argv);
        exit(1);
		}
      if (argv == NULL || argv[0] == NULL)
      {
        blt = check_builtin(argv);
        if (blt == 1)
        {
          return (fun_builtin(argv));
        }
      
	      else 
        {*/
         /* if (stat(argv[0], &st) != 0)*/
    
          argv[0] = add_command(argv[0]);
          
          exec_cmd (argv);
        
      
       free (argv);
    
  return (0);
}
