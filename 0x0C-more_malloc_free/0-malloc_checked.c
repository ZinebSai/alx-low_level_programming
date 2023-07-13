#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *bk;

	bk = malloc(b);
	if (bk == NULL)
		exit(98);
	return (bk);
}
