#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - converts a binary string to an unsigned int
* @b: string of the binary to convert
* Return: converted number or 0 if null, non 0/1 in string
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, non_binary = 0;
	int night = 0, i;

	if (b == NULL)
		return (0);
	while (b[night] != '\0')
		night++;
	night -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (non_binary);
		}
		if (b[i] == '1')
			result += (1 * (1 << night));
		i++;
		night--;
	}
	return (result);
}
