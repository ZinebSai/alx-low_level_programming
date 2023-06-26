#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to  reverse
 */
void rev_string(char *s)
{
	char t;
	int a, l, l1;

	l = 0;
	l1 = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	l1 = l - 1;

	for (a = 0; a < l / 2; a++)
	{
		t = s[a];
		s[a] = s[l1];
		s[l1--] = t;
	}
}
