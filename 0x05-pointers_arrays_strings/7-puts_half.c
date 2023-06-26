#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int l, a, b;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (b = l / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	} else if (l % 2)
	{
		for (a = (l - 1) / 2; a < l - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
