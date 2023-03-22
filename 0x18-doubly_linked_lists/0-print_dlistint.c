#include "lists.h"

/**
 * print_dlistint - print the elements
 * @h: the list
 * Return: the # of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
