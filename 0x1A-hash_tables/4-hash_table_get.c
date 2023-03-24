#include "hash_tables.h"

/**
 * hash_table_get - retieve value associated with key
 * @key: the key
 * @ht: the hash table
 * Return: value associated with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	value = ht->array[index]->value;

	return (value);
}
