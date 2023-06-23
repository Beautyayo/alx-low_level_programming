#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * Return: 10 times of the numbers from 0 to 14
 */

void print_most_numbers(void)
{
	int x, y;

	for (x = 0; x < 14; X++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
