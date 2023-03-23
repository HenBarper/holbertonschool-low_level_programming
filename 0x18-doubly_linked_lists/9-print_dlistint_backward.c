#include "lists.h"

/**
 * print_dlistint_backward - print list elements backwards
 * @h: the list
 * Return: The number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
	}
	while (h)
	{
		printf("%i\n", h->n);
		h = h->prev;
		i++;
	}

	return (i);
}
