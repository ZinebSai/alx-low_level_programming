#include <stdio.h>
int main(void){
	printf("Size of char is : %zu bytes\n", sizeof(char));
        printf("Size of int is : %zu bytes\n", sizeof(int));
	printf("size of long int is : %zu bytes\n", sizeof(long int));
	printf("size of long long int is : %zu bytes\n", sizeof(long long int));
	printf("size of float is : %zu bytes\n", sizeof(float));

	return (0);
}
