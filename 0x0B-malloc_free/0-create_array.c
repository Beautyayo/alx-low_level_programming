#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * return: Null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	char *str = malloc(size * sizeof(char));
	
	if (size == 0 || str == Null)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
