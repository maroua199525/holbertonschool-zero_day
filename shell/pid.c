#include "shell.h"

/**
 * _pid - PID
 *
 * Return: Always 0.
 */
int _pid(void)
{
  pid_t my_pid;

  my_pid = getpid();
  return (my_pid);
}
