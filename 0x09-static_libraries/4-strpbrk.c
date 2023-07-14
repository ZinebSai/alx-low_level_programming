#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This is my function
 * @s: This is my entry
 * @accept: This is my second entry
 * Return: This is my return
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
