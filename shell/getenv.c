#include "shell.h"
#include <string.h>
int main () 
{

  char *str, *cmd;
  char *token;

  str = getenv("PATH");
  token = strtok(str, ":");   /* get the first token */
  while (token != '\0')    /*other tokens */
  {
    cmd = _strdup(token);
    printf("%s\n", token) ;
    token = strtok(NULL, ":");
  }
  return(0);
}
