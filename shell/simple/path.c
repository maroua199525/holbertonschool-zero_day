#include "shell.h"


/**
* add_command - add command to the path
* @cmd: the command to look for its path
*Return: string: full path with the command
*/

char *add_command(char *cmd)
{
	char *path , *command_path , *path2 ;
	char *path_parser ,  *cmdd;
	struct stat st;

	path = getenv("PATH");
	printf("%s path \n", path);
	path_parser = strtok(path, ":");
	printf(" path parser %s", path_parser);
	while (path_parser != NULL)
	{
	command_path = append_pathcmd(cmd, path_parser);
	printf("command is %s",command_path);
		if (stat(command_path, &st) == 0)
		{
			cmdd = _strdup(command_path);
			printf("command is %s",cmdd);
			return (cmdd);
		}
		path_parser = strtok(NULL, ":");
			printf(" path parser %s", path_parser);

	}

	return (NULL);
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
	int cmd_length = 0, dir_length = 0, append_length = 0;

	printf("%s\n",cmd);
	cmd_length = _strlen(cmd);
	dir_length = _strlen(directories);
	append_length = cmd_length + dir_length + 2;
	append = malloc(sizeof(char) * append_length);
	if (append == NULL)
	{
		return (NULL);
	}
	append = _strcpy(append, directories);
	append = _strcat(append, "/");
	append = _strcat(append, cmd);
	return (append);
}
