#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{
	char *ch;
	FILE *fg;
	int i = 0;
	while (i < 10)
	{
	printf("$ ");
	ch = _getline(fg);
	}
	return (0);
}
char *_getline (FILE *fp)
{

	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	read = getline(&line, &len, fp);
	if (read == -1)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}
	return (line);
}
