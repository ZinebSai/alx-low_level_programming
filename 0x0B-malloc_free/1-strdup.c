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
	int st;
	int y;

	if (str == NULL)
	{
		return (NULL);
	}
	st = _strlen(str) + 1;
	pnt = malloc(st * sizeof(char));

	y = 0;
	while (y < st)
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
