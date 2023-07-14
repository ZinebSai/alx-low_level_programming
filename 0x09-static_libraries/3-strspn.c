#include "main.h"

/**
 * _strspn - a function
 * @s : the string literal
 * @accept: the second string
 *
 * Return:the equal string to S
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, b, d;
	
	d = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[i])
			{
				d++;
				break;
			}
		}
		if (accept[b] != s[i])
		{
		break;
		}
	}
	return (d);
}
