#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory 
*
*Return: poiner 
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			b[a] = 0;
		return (b);
	}
	else
		return (NULL);
}
