#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;

	if (ht == NULL)
		return;

	putchar('{');

	node = ht->array[0];
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->next != NULL)
			printf(", ");
		node = node->next;
	}
	printf("}\n");
}
