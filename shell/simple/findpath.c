#include "shell.h"

/**
 * path_command - add command to the path
* @argv: the command to look for its path
 *Return: 0
 */

int path_command(char **argv)
{

int i = 0;
struct stat st;
char *str, **path_parser, *cmd;

str = _strdup(_getenv("PATH"));
path_parser = parse_line(str, ":");
while (path_parser[i] != NULL && argv[0] != NULL)
{
	cmd = append_pathcmd(argv[0], path_parser[i]);
	if (stat(cmd, &st) == 0)
	{
		argv[0] = cmd;
		free(str);
		return (exec_cmd(argv));
	}
	i++;
}
free(str);
free(cmd);
return (-1);
}

/**
 * append_pathcmd - concat the command with the full path
 * @cmd: the command to concat with its path
 *@directories: string
 *Return: string: full path with the command
 */

char *append_pathcmd(char *cmd, char *directories)
{
	char *append = NULL;
	size_t append_length;
	
	append_length = _strlen(cmd) + _strlen(directories);
	append = malloc(sizeof(char) * append_length + 2);
	if (append == NULL)
	{
		return (NULL);
	}
	append = _strcpy(append, directories);
	append = _strcat(append, "/");
	append = _strcat(append, cmd);
	return (append);
}
