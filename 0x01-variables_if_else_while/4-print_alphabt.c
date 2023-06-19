#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase.
 * Followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	
	putchar('\n');
	return (0);
}
