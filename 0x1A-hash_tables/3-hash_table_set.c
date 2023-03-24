#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - add an element to hash table
 * @ht: the hash table
 * @key: the key
 * @value: val to add
 * Return: index of key value pair
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;

	if (key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next;
			ht->array[index] = new_node;
			free_node(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->key, key) != 0)
			current = current->next;
		if (strcmp(current->key, key) == 0)
		{
			new_node->next = current->next->next;
			free_node(current->next);
			current->next = new_node;
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
