#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table where the data will be added
 * @key: the key of the value
 * @value: value the key points to
 * Return: 1 for success and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *buffer;
	unsigned long int index;

	if (!key || *key == '\0' || !value || ht == NULL)
		return (0);
	buffer = malloc(sizeof(hash_node_t));
	if (buffer == NULL)
		return (0);
	buffer->value = strdup(value);
	if (buffer->value == NULL)
	{
		free(buffer);
		return (0);
	}
	buffer->key = strdup(key);
	if (buffer->key == NULL)
	{
		free(buffer->value);
		free(buffer);
		return (0);
	}
	buffer->next = NULL;
	index = key_index((const unsigned char *) buffer->key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = buffer;
	}
	else
	{
		buffer->next = ht->array[index];
		ht->array[index] = buffer;
	}
	return (1);
}
