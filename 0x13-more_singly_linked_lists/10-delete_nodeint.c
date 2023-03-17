#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head node
 * @index: index
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	temp = *head;
	for (i = 1; i < (index - 1) ; i++)
	{
		if (temp->next->next == NULL)
			return (-1);
		temp = temp->next;
	}

	temp->next = temp->next->next;
	return (1);
}