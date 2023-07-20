#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc((size) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < size)
	{
		arr[a] = c;
		a++;
	}
	arr[a] = '\0';
	return (arr);
}
