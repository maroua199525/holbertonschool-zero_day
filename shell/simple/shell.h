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
/************ MACROS **********/

#define BUFSIZE 1024
#define DELIMIT " \t\r\n\a"


/**********GLOBAL VARIABLE **************/

extern char **environ;

/********** FUNCTION Recreation *************/

char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
/*********** Function parser *****************/
char **parse_line(char *line);
char *_readline(void);
void _printenv(char **environ);
void sig_handler(int signum);
int exec_v(char *cmd, char **commande, char **env);

/************* Function******************/
void prompt(void);
void signal_to_handel(int sig);
/**
 * struct bulltin - execute function bultin
 * @cmd:pointer to char
 * @fun: function to execute
 */

typedef struct  bulltin
{
	char *cmd;
	int (*fun)(char **line);
} built_in ;

#endif
