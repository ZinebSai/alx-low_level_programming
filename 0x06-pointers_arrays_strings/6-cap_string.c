#include "main.h"
/**
 * cap_string - capitalizes words in a string.
 * @s: analized string.
 *
 * Return: String capitalized.
 */

char *cap_string(char *s)
{
	int a, b;
	int c[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	a = 0;
	while (*(s + a) != '\0')
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
		{
			if (a == 0)
			{
				*(s + a) = *(s + a) - 32;
			}
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (c[b] == *(s + a - 1))
					{
						*(s + a) = *(s + a) - 32;
					}
				}
			}
		}
	a++;
	}
	return (s);
}
