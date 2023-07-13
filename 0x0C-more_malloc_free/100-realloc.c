#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
* _realloc - reallocates a memory block
* @ptr: pointer 
* @old_size: size of ptr
* @new_size: size of the new memory 
*
* Return: pointer 
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *bk;
	unsigned int a;

	if (ptr == NULL)
	{
		bk = malloc(new_size);
		return (bk);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		bk = malloc(new_size);
		if (bk != NULL)
		{
			for (a = 0; a < min(old_size, new_size); a++)
				*((char *)bk + a) = *((char *) ptr + a);
			free(ptr);
			return (bk);
		}
		else
			return (NULL);
	}
}
