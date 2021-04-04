#ifndef SHELL_FILE
#define SHELL_FILE
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
void _process(void);
int _pid(void);
pid_t _pid(void);
void *_readline(void);
#endif
