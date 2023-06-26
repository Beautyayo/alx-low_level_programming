#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
