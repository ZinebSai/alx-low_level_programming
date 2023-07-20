#include "maih.h"
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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */

char *_strdup(char *str)
{
	char *pnt;
	int s;
	int y;

	if (s == NULL)
	{
		return (NULL);
	}
	s = _strlen(s) + 1;
	pnt = malloc(s * sizeof(char));

	y = 0;
	while (y < s)
	{
		if (pnt == NULL)
		{
			return (NULL);
	}
		pnt[y] = str[y];
		y++;
	}
	return (pnt);
}
