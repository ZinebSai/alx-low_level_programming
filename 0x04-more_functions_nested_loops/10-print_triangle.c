#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line .
 * @size : the size of the triangle.
 *
 * Return : Nothing
 */

void print_triangle(int size)
{
	int t, r;

	if (size > 0)
	{
		for (t = 1; t <= size; t++)
		{
			for (r = 1; r <= size; r++)
			{
				if (r <= size - t)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
