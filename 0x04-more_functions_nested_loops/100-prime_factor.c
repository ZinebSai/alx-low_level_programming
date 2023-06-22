#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor of the number .
 *
 * Return: Always 0.
 */

int main(void)
{
	long l;
	long f;

	l = 612852475143;

	for (f = 2; l > f; f++)
	{
		while (l % f == 0)
		{
			l = l / f;
		}
	}
	printf("%lu", f);
	putchar('\n');
	return (0);
}
