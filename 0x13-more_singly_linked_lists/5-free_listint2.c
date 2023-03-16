#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free the list
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
