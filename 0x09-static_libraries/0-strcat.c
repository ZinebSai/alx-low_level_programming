#include "main.h"

/**
 *_strcat - This is the main copy
 * @dest: This is my dest
 * @src: This is my source
 * Return: This return to the result
 */

char *_strcat(char *dest, char *src)
{
	int c, d;

	for (c = 0; dest[c] != '\0'; c++)
	{
		for (d = 0; src[d] != '\0'; d++)
		{
			dest[c] = src[d];
			c++;
		}
		return (dest);
	}
}
