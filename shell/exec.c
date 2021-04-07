#include "shell.h"
/**
 * _exec - execve the comands from line.
 * @cmd: first Command to execute.
 * @command: another Command to execute.
 * @env: string
 *
 * Return: 0.
 */
int exec_v(char *cmd, char **command, char **env)
{

  if (execve(cmd, command, env) < 0)
    {
      printf("Error");
    }
  return (0);
}
