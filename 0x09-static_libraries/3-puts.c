#include "main.h"

/**
 * _puts - Escribir un texto
 *
 * @str: This is my entry
 *
 */

void _puts(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
