#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16 in lowercase.
 * Followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
