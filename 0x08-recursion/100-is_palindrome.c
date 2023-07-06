#include "main.h"
/**
 *   * _lenght - checks the length of a string
 *     * @s: is the string
 *       * Return: return the leng of the string
 *       **/
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}
