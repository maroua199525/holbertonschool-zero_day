#ifndef SHELL_FILE
#define SHELL_FILE
#define SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * struct built_s - Builtings commands
 * @command: command name.
 * @f: function to call.
 *
 * Description: Longer description
 */
/*typedef struct built_in
{
  char *command;
  void 
} built_in;
*/
char **parse_line(char *line);
char *_readline(void);
void _printenv(char **environ);
void sig_handler(int signum);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
int exec_v(char *cmd, char **commande, char **env);
/*
void *_process(void);
pid_t _pid(void);
pid_t _ppid(void);
void *_readline(void);
*/
#endif
