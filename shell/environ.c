#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
extern char **environ;
void printenv()
{
  int i = 0;
  while (environ[i] != NULL) {
    printf("%s\n", environ[i]);
    i++;
  }
}
void main()
{
  pid_t childPid;

  childPid = fork();
    if (childPid == 0)/* child process */
    {
      printenv();
      exit(0);
    }
    /* parent process */
    /*printenv();*/
   exit(0);
}
