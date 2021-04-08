#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include "shell.h"
void sig_handler(int signum){

  if (signum == SIGINT)
    {
      write(STDOUT_FILENO, "\n$ ", 3);
     
    }
  //Return type of the handler function should be void
}

