#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse,
 * Followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
