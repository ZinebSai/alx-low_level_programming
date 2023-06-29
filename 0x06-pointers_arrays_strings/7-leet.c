#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: string.
 *
 * Return: String with vowels changed.
 */
char *leet(char *s)
{
	char v[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int a = 0;
	int b;

	while (*(s + a) != '\0')
	{
		for (b = 0; b <= 9; b++)
		{
			if (*(s + a) == v[b])
			{
				*(s + a) = n[b];
			}
		}
		a++;
	}
	return (s);
}
