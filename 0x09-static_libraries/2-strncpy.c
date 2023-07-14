#include "main.h"
/**
 * _strncpy - This is my main
 * @dest: This is my dest
 * @src: This is my source
 * @n: This is my N
 *
 *Return: THis is my return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0' ; k++)
	{
	dest[k] = src[k];
	}
	for (; k  < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
