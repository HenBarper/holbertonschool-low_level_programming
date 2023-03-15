#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - return length of list
 * @h: list var
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
