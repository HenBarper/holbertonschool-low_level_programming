#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: the list
 * @index: the spot to delete
 * Return: 1 or -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *dnode;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;

		free(temp);
		return (1);
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	dnode = temp->next;
	temp->next = dnode->next;
	if (dnode->next)
	{
		dnode = dnode->next;
		dnode->prev = temp;
	}
	free(dnode);
	return (1);
}
