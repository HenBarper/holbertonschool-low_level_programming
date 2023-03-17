#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - return the sum of all data
 * @head: head node
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
