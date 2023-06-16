#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nmbr;

	for (nmbr = 0; nmbr < 10; nmbr++)
		putchar(nmbr);

	putchar('\n');

	return (0);
}
