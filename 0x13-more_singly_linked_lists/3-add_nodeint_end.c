#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end
 * @head: head node
 * @n: value of int
 * Return: address of new element or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
