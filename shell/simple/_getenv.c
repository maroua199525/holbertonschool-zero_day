#include "shell.h"
/**
*_getenv - Gets the value of an environment variable.
*@var_name: The variable name.
*Return: Returns the value of the environment variable varname
*/

char *_getenv(char *var_name)
{
	int i, j = 0;
	char *variable_value;

	if (var_name != NULL)
		return (NULL);
	for (i = 0; environ[i]; i++)
	{
		if (var_name[j] == environ[i][j])
		{
			while (var_name[j])
			{
				if (var_name[j] != environ[i][j])
					break;
				j++;
			}
			if (var_name[j] == '\0')
			{
				variable_value = (environ[i]);
				return (variable_value);
			}
		}
	}
    return (NULL);
}

int main(void)
{
    char *path = "PATH";
    char *ch;
    ch = _getenv(path);
    printf("%s\n", ch);
    return (0);
}