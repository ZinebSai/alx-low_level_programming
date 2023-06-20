#include "main.h"

/**
 * print_alphabet - prints the alphapets in lowercase followed by a new line.
 * return : nothing.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
