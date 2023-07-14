#include "main.h"

/**
 * _strncat - The function
 * @dest: first value
 * @src: second value
 * @n: a number
 * Return: a value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[i];
		i++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
