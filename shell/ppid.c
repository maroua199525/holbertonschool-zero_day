#include "shell.h"

/**
 * _piid - PID
 *
 * Return: my_ppid
 */
pid_t _pid(void)
{
  pid_t my_ppid;

  my_pid = getpid();
  return (my_pid);
}
