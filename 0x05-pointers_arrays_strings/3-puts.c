#include "main.h"

/**
 * _puts - prints a string
 * Followed by a new line
 * @str: string to print
 * Return: string and a new line
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
