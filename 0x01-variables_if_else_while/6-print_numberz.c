#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10,
 * Starting from 0, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');
	return (0);
}
