#include "lists.h"

/**
 * list_len - calculate the number of elements
 * @h: pointer to a list
 * Return: integer
 */

size_t list_len(const  list_t *h)
{
	size_t number_of nodes;
	
	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
