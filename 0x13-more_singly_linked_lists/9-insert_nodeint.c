#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert new node @ idx
 * @head: head node
 * @idx: index
 * @n: n value
 * Return: Address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->n = n;
		return (new);
	}
	new->n = n;
	temp = *head;
	for (i = 0; i < idx ; i++)
	{
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	if (new == NULL)
		return (NULL);

	return (new);
}
