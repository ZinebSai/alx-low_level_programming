#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	;
	return (b);
}
/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, b;

	l = _strlen(dest);
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[l + b] = src[b];
	return (dest);
}

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	char *pnt;
	int si1, si2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	si1 = _strlen(s1);
	si2 = _strlen(s2);

	pnt = malloc(((si1 + si2) + 1) * sizeof(char));
	if (pnt == NULL)
	{
		return (NULL);
	}
	_strncat(pnt, s1, si1);
	_strncat(pnt, s2, si2);
	pnt += '\0';
	return (pnt);
}
