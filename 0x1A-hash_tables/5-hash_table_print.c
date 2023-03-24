#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	putchar('{');

	node = ht->array[0];

	for (i = 0 ; i < ht->size ; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				node = node->next;
			}
		}
	}
	printf("}\n");
}
