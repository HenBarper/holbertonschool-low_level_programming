#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of list
 * @head: the list
 * @index: the nth node
 * Return: The node gotten
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index ; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
