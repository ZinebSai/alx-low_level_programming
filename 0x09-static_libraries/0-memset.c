#include "main.h"

/**
 * * _memset - Program fills a block of memory with a specific value
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes
 * Return: change array with new value for n bytes
 */


char *_memset(char *s, char b, unsigned int n)
{
	int q = 0;

	for (; n > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
