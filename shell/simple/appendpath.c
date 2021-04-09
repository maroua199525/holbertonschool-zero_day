char *append_path(char *cmd, char *directories)
{
	char *append;
	int i = 0, j = 0, cmd_length, dir_length, append_length;

	cmd_length = _strlen(cmd);
	dir_length = _strlen(directories);
	append_length = cmd_length + dir_length + 2;
	append = malloc(sizeof(char) * append_length);
    if (append == NULL)
    {
        return (NULL);
    }
	_strcpy(append, directories);
    append = _strcat(append, "/");
    append = _strcat (append, cmd);
	}
	return (append);