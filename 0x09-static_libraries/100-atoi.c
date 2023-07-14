#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The integer that was converted
 */
int _atoi(char *s)
{
	int i, st, neg;
	unsigned int num;

	st = -1;
	neg = 0;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			st = i;

		if (s[i] == '-' && st == -1)
		{
			if (neg)
				neg = 0;
			else
				neg = 1;
		}
	}

	if (st != -1)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				num = num * 10 + s[i] - '0';
			else if (s[i - 1] >= '0' && s[i - 1] <= '9')
				break;
		}
	}

	if ((num >= (unsigned int) INT_MAX && neg == 0))
		return (INT_MAX);
	else if ((num > (unsigned int) INT_MAX && neg))
		return (INT_MIN);
	else if (neg)
		return ((int) -num);
	else
		return ((int) num);
}
