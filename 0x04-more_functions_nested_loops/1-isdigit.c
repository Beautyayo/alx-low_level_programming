#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: The number to be checked
 * Return: 1 for digit character or for any else
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
