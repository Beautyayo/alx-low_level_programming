#include <stdio.h>

/**
 * main - a program the alphabet in lowercase.
 * Followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;

	}

	putchar('\n');

	return (0);
}
