#include "main.h"

/**
 * _islower - tests a character is a
 * lowercase letter .
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */

int _islower(int c)
{
	if (c >= 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
