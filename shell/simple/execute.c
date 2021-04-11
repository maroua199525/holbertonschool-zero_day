#include "shell.h"
/**
 * _exec - execve the comands from line.
 * @cmd: first Command to execute.
 * @command: another Command to execute.
 * @env: string
 *
 * Return: 0.
 */

int exec_cmd(char **cmd)
{
  pid_t pid;
  int status;
 if (cmd == NULL || cmd[0] == NULL)
    return (-1);
  pid = fork();
  if (pid == 0) {
    // Child process
    if (execve(cmd[0], cmd, environ) == -1) {
      perror("hsh");
      exit(0);
      return (-1);
    }
  }
else if (pid == -1)
{
perror("forking failed");
exit(-1);
return (-1);
}
  
  else
  {
  // Parent process
      waitpid(pid, &status, WUNTRACED);
  }

  return (0);
}

