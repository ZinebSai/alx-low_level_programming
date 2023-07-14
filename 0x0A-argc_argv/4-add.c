#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int a, s = 0, r = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			find_letter = argv[a];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			r = atoi(argv[a]);
			s += r;
		}
		printf("%d\n", s);
	}
	else
		printf("%d\n", 0);
	return (0);
}
