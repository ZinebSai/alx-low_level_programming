#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - Concatenates two strings
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.Otherwise - a pointer 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int a = n, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		a++;

	con = malloc(sizeof(char) * (a + 1));

	if (con == NULL)
		return (NULL);

	a = 0;

	for (x = 0; s1[x]; x++)
		con[a++] = s1[x];

	for (x = 0; s2[x] && x < n; x++)
		con[a++] = s2[x];

	con[a] = '\0';

	return (con);
}
