#include "lists.h"

/**
 * add_dnodeint_end - Add new node at end
 * @head: the list
 * @n: the int value of the node
 * Return: the address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

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

		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
