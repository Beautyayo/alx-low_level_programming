#include "main.h"

/**
* print_binary - prints a binary representation of a number
*
* @n: number to print binary representation
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int copy, x, y;

	copy = n;
	x = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (copy != 0)
	{
		x++;
		copy = copy >> 1;
	}
	while (x)
	{
	copy = n;

	for (y = 1; y < x; y++)
	copy = copy >> 1;
		if (copy == (copy | 1))
		_putchar('1');
		else
	_putchar ('0');
		x--;
	}
}
