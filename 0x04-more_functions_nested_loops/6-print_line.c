#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 * @n: is the number of times the character _ is printed .
 * followed by new line .
 *
 * Return: Nothing.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
