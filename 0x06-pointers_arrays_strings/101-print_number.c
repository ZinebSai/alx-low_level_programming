#include "main.h"

/**
 * print_number - print an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	int a, b, dig, digits, pwr;
	unsigned int tmp, nchar, num;

	dig = 0;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}

	num = tmp;

	while (num >= 10)
	{
		num = num / 10;
		dig++;
	}
	digits = dig + 1;
	pwr = 1;
	a = 1;

	while (a < digits)
	{
		pwr = pwr * 10;
		a++;
	}
	b = pwr;
	while (b >= 1)
	{
		nchar = (tmp / b) % 10;
		_putchar(nchar + '0');
		b = b / 10;
	}
}
