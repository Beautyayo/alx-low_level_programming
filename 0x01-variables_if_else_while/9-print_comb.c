#include <stdio.h>

/**
 * main - Program that prints all single-digit numbers.
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}