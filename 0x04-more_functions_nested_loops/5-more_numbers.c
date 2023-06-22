#include "main.h"

/**
 * more_numbers -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i;
	int j= 0;

	for (i = 0 ; i < 10 ; i++)
	{
		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		j = 0;
		_putchar('\n');
	}
}

