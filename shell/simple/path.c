#include "shell.h"


/**
* add_command - add command to the path
* @cmd: the command to look for its path
*Return: string: full path with the command
*/

char *add_command(char *cmd)
{
	char *path, *command_path;
	char *path_parser;
	struct stat st;

	path = getenv("PATH");
	path_parser = strtok(path, ":");
	while (path_parser != NULL)
	{
	command_path = append_pathcmd(cmd, path_parser);
		if (stat(command_path, &st) == 0)
		{
			return (command_path);
		}

		path_parser = strtok(NULL, ":");
	}
	free(path_parser);
	free(command_path);

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
	char *append;
	int cmd_length, dir_length, append_length;

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
