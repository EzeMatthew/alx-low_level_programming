#include <stdio.h>

/**
 * main -print sizr of various types
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	ptintf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}