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

/**
 * print_number -print number with putchar
 * @n:integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

