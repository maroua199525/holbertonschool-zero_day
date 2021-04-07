#include "shell.h"

/**
 * _piid - PID
 *
 * Return: my_ppid
 */
pid_t _ppid(void)
{
  pid_t my_ppid;

   my_ppid = getpid();
  return (my_ppid);
}
