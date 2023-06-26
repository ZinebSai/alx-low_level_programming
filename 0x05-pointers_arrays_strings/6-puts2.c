#include "main.h"

/**
 * puts2 - prints every other character of a string followed by n line
 * @str: string
 */
void puts2(char *str)
{
	int l, z;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (z = 0; z < l; z += 2)
	{
		_putchar(str[z]);
	}

	_putchar('\n');
}
