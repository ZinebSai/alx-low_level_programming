#include "main.h"

/**
 * _strncat - concatenate two strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int lD, lS;

	lD = 0;
	lS = 0;

	while (*(dest + lD) != '\0')
		lD++;

	while (*(src + lS) != '\0' && lD < 97 && lS < n)
	{
		*(dest + lD) = *(src + lS);
		lD++;
		lS++;
	}
	*(dest + lD) = '\0';
	return (dest);
}
