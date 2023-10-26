#include "main.h"

/**
* flip_bits - function that calculates the number of bits needed
* to get from one number to another
*
* @n: base number
*
* @m: number to transform
*
* Return: the number of bit transformations
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;

	for (x = 8 * sizeof(n) - 1; x >= 0; x--)
		if (((n ^ m) >> x) & 1)
			count++;
	return (count);
}
