#include <stdio.h>

/**
 * main - Program that  prints numbers of base 10 starting from 0.
 * Followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');
	return (0);
}
