#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 * Return:0
 */
int main(void)
{
	printf("Size of char is: %zu bytes", sizeof(char));
	printf("Size of int is: %zu bytes", sizeof(int));
	printf("size of long int is: %zu bytes", sizeof(long int));
	printf("size of long long int is: %zu bytes", sizeof(long long int));
	printf("size of float is: %zu bytes", sizeof(float));
	return (0);
}
