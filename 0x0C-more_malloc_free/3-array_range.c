#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest nmbr
* @max: lagrest nmbr
*
* Return: pointer 
*/

int *array_range(int min, int max)
{
	int *bk;
	int a, b = 0;

	if (min > max)
		return (NULL);
	bk = malloc(sizeof(*bk) * ((max - min) + 1));
	if (bk != NULL)
	{
		for (a = min; a <= max; a++)
		{
			bk[b] = a;
			b++;
		}
		return (bk);
	}
	else
		return (NULL);

}
