#include "main.h"

/**
 * _puts - prints a string
 * Followed by a new line
 * @str: string to print
 * Return: 0
 */

viod _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
