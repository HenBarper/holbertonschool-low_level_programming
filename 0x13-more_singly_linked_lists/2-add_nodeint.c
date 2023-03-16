#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add node at begin
 * @head: head node
 * @n: value of int
 * Return: address of new element or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
