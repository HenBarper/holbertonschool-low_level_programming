#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of list
 * @head: the list
 * @index: the nth node
 * Return: The node gotten
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; i < index ; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
