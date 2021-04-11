#include "shell.h"

/**
* sig_handler - checks if Ctrl C is pressed
* @signum: int
*Return: void
*/
void sig_handler(int signum)
{

	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
	/*Return type of the handler function should be void*/
}

/**
 * prompt - Display Shell Prompt
 */
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
