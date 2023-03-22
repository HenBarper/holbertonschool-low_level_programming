#include "lists.h"

/**
 * sum_dlistint - return value of all nodes
 * @head: the list
 * Return: The total value of node ns
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
