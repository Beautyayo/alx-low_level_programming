#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase,
 * Then in uppercase, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
