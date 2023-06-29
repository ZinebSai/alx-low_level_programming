#include "main.h"

/**
 * _strncat - concatenate two strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src)
{
	int D, S;

	D = 0;
	while (dest[D] != '\0')
	{
		D++;
	}
	S = 0;

	while (src[S] != '\0')
	{
		dest[D] = src[S];
		D++;
		S++;
	}
	dest[S] = '\0';
	return (dest);
}
