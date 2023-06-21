#include "main.h"
/**
 * print_sign - Determines an integer is positive, negative or zero.
 * @n: the tested number .
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
