#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: the int
 */

int _atoi(char *s)
{
	int i, j, m, l, g, dig;

	i = 0;
	j = 0;
	m = 0;
	l = 0;
	g = 0;
	dig = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && g == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (j % 2)
				dig = -dig;
			m = m * 10 + dig;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}

	if (g == 0)
		return (0);

	return (m);
}
