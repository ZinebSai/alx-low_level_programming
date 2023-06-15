#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 * Return:0
 */
int main(void)
{
	printf("Size of char is: %lu bytes\n", sizeof(char));
	printf("Size of int is: %lu bytes\n", sizeof(int));
	printf("size of long int is: %lu bytes\n", sizeof(long int));
	printf("size of long long int is: %lu bytes\n", sizeof(long long int));
	printf("size of float is: %lu bytes\n", sizeof(float));
	return (0);
}
