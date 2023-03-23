#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: the list
 * @index: the spot to delete
 * Return: 1 or -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *nodeToDelete;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
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

	nodeToDelete = temp->next;
	temp->next = nodeToDelete->next;
	if (nodeToDelete->next)
	{
		nodeToDelete = nodeToDelete->next;
		nodeToDelete->prev = temp;
	}
	free(nodeToDelete);

	return (1);
}
