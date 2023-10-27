#include "main.h"
#include <stdio.h>

/**
* get_bit - function that gets the value of int at index
*
* @n: pointer to number
*
* @index: index to change
*
* Return: 1 on success, -1 on failure
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value, bin;

	if (index > (sizeof(unsigned long int) * 8))
	return (-1);

	bin = n >> index;

	bit_value = bin & 1;
	return (bit_value);
}
