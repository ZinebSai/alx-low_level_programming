#include "main.h"

/**
 * _isupper - checks for uppercase charachter.
 * @c : is the character.
 * Return : 1 if it is a uppercase character, 0 if it is otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
