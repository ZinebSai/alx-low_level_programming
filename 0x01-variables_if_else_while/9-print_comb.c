#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nmbr;

	for (nmbr = 0; nmbr <= 9; nmbr++)
	{
		putchar((nmbr % 10) + '0');
		if (nmbr == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
