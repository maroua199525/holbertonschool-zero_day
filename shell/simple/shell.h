#ifndef SHELL_FILE
#define SHELL_FILE

/**********Header file**********/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
/************ MACROS **********/

#define SIZE 1024
#define PATH_MAX 1020
#define DELIMIT " \t\r\n\a"
/**********GLOBAL VARIABLE **************/

extern char **environ;

/********** FUNCTION Recreation *************/

char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
/*********** Function shell *****************/
char **parse_line(char *line, char *del);
char *_readline(void);
char *_getenv(char *name);
int print_env(char **environ);
void sig_handler(int signum);
int exec_cmd(char *cmd,char **argv);
char *append_pathcmd(char *cmd, char *directories);
int check_builtin(char **command);
int change_dir(char **cmd);
char *add_command(char *cmd);
void prompt(void);
int fun_builtin(char **command);
char *_getenv(char *name);
/**************** STRUCT********************/
/**
 * struct bulltin - execute function bultin
 * @cmd:pointer to char
 * @fun: function to execute
 */

typedef struct  bulltin
{
	char *cmd;

	int (*fun)(char **arg);
} built_in;

#endif
