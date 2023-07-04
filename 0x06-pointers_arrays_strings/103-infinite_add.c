#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add 2 numbers.
 * @n1: number1.
 * @n2: number2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String .
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d = 0, e = 0, c = 0, a, b, sum, big;	
	
	while (n1[d] != '\0')
		d++;
	while (n2[e] != '\0')
		e++;
	if (d > e)
		big = d;
	else
		big = e;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';
	
	while (big >= 0)
	{
		a = (n1[d - 1] - '0');
		b = (n1[e - 1] - '0');
		if (d > 0 && e > 0)
			sum = a + b + c;
		else if (d < 0 && e > 0)
			sum = b + c;
		else if (d > 0 && e < 0)
			sum = a + c;
		else
			sum = c;
		
		if (sum > 9)
		{
			c = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			c = 0;
			sum = sum + '0';
		}
		r[big] = sum;
		d--;
		e--;
		big--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
