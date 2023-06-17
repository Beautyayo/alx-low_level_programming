#include <stdio.h>

/**
 * main - prints "the size of various types on the computer it is compiled and run on."
 * Return: Always 0
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of short: %zu byte(s)\n", sizeof(short));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu bytes)\n", sizeof(double));
	printf("Size of long double: %zu byte(s)\n", sizeof(long double));
	
	return (0);
}
