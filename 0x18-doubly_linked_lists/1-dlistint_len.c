#include "lists.h"

/**
 * dlistint_len - return the number of elements in lit
 * @h: the list
 * Return: the # of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
