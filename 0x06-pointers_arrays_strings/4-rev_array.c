#include "main.h"

/**
 * reverse_array - preverse array of array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int sp, bg, E;

	bg = 0;
	E = n - 1;
	while (bg < E)
	{
		sp = *(a + bg);
		*(a + bg) = *(a + E);
		*(a + E) = sp;
		bg++;
		E--;
	}
}
