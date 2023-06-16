#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int nmbr;

	for (nmbr = 0; nmbr < 10; nmbr++)
		printf("%d", nmbr);
	printf("\n");

	return (0);
}
