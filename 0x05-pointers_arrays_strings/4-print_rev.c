#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;
	char *ptr = s;

	while (*ptr != '\0')
	{
		longi++;
		ptr++;
	}
	for (o = longi; o > 0; o--)
	{
		char c = *(s + 1);
		
		_putchar(*c);
	}

	_putchar('\n');
}
