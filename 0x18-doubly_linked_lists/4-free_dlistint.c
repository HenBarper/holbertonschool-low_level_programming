#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
