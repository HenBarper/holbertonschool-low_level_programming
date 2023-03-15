#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a node at the beginning of list
 * @head: first node
 * @str: string to be dpd
 * Return: the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
