#include "main.h"
#include <stdio.h>
/**
 * infinite_add 2 numbers.
 * @n1: number1.
 * @n2: number2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String .
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c = 0, d, e, S, big;
	
	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		big = a;
	else
		big = b;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';
	
	while (big >= 0)
	{
		d = (n1[a - 1] - '0');
		e = (n1[b - 1] - '0');
		if (a > 0 && b > 0)
			S = d + e + c;
		else if (a < 0 && b > 0)
			S = e + c;
		else if (a > 0 && b < 0)
			S = d + c;
		else
			S = c;
		
		if (S > 9)
		{
			c = S / 10;
			S = (S % 10) + '0';
		}
		else
		{
			c = 0;
			S = S + '0';
		}
		r[big] = S;
		a--;
		b--;
		big--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
