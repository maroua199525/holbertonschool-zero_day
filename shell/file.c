#include <stdio.h>
#include <stdlib.h>
/*extern char **environ;*/
int main(int ac, char **argv, char **env)
{
  (void)ac;

  argv[] = {"/usr/bin/env", NULL};
  execve(argv[0], argv, env);
  return 0 ;
}
