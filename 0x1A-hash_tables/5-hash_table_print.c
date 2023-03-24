#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, flag = 0;

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
				if (flag == 1)
					printf(", ");

				printf("'%s': '%s'", node->key, node->value);
				flag == 1;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
