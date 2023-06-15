#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table where the data will be added
 * @key: the key of the value
 * Return: the value stored in the list
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *data_found;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	data_found = ht->array[index];
	if (data_found == NULL)
		return (NULL);
	return (data_found->value);
}
