#include "lists.h"
#include <stdio>
#include <stdlib>

/**
 * print_list - print the elements of a list_t list
 * @h: list var
 * Description: prints the elements of a list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
