#include "shell.h"


/**
* add_command - add command to the path
* @cmd: the command to look for its path
*Return: string: full path with the command
*/

int add_command(char **cmd)
{
	char *path , *command_path, *path_parser;
	struct stat st;

	path = getenv("PATH");
	printf("%s path \n", path);
	path_parser = strtok(path, ":");
	printf(" path parser %s", path_parser);
	while (path_parser != NULL)
	{
	command_path = append_pathcmd(*cmd, path_parser);
	/*printf("command is %s", command_path);*/
		if (stat(command_path, &st) == 0)
		{
			*cmd = _strdup(command_path);
			/*printf("command is %s",cmdd);*/
			free(command_path);
			free(path_parser);
			return (0);
		}
		free (command_path);
		path_parser = strtok(NULL, ":");
			/*printf(" path parser %s", path_parser);*/

	}
	free(path);
	return (1);
}

/**
 * append_pathcmd - concat the command with the full path
 * @cmd: the command to concat with its path
 *@directories: string
 *Return: string: full path with the command
 */
char *append_pathcmd(char *cmd, char *directories)
{
	char *append;
	size_t append_length;

	/*printf("%s\n",cmd);*/
	append_length = _strlen(cmd) + _strlen(directories);
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
