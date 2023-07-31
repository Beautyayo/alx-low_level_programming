#include "list.h"
/**
 * print_listint -  function that prints all the elements
 * @h: linked list of type lisnt_t to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while(h)
	{
		printf("%d\m", h -> n)'
			num++;
		h = h -> next;
	}
	return (num);
}
