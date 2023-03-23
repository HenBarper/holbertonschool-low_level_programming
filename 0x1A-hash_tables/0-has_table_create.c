#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: a ptr to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		new->array[i] = NULL;
	}

	return (new);
}
