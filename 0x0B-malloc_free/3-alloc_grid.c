#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **pnt;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	pnt = malloc(height * sizeof(int *));
	if (pnt == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		pnt[a] = malloc(width * sizeof(int));
		if (pnt[a] == NULL)
		{
			for (b = 0; b < a;  b++)
				fbree(pnt[b]);
			free(pnt);
			return (NULLi);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (pnt);
}
