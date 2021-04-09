#include "shell.h"

char *search_path(char **env)
{
	char *path = "PATH=";
	int i = 0; j = 0;

	while (env[i])
	{
		while (j < 5)
		{
			if (path[j] != env[i][j])
			{
				break;
			}
			j++;
			if (j == 4)
			{
				return (env[i]);
			}
		}
	}
	return (NULL);
}

int add_command(char **cmd)
{
	char *path;
	char **path_parser;
	int i = 0;
	struct stat st;

	path = search_path(env);
	path_parser = parse_line(PATH, ":");
	while (path_parser[i] != '\0')
	{
	command_path = append(*cmd, path_parse[i]);
		if (stat(command_path, &st) == 0)
		{
			*cmd = _strdup(cmd_path);
			return (1);
		}
	}
	free(path);

	return (-1);
	