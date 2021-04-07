#include <stdio.h>
extern char **environ;
int main(int ac, char **av, char **env)
{
  (void)ac;
  (void)av;
  printf("%p\n%p\n", *environ, *env);
  return (0);
}
