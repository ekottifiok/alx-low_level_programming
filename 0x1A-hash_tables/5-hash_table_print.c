#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, printed;
	hash_node_t *buffer;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (size = 0, printed = 0; size < ht->size; size++)
	{
		if (ht->array[size] == NULL)
			continue;
		buffer = ht->array[size];
		while (buffer != NULL)
		{
			if (printed > 0)
				printf(", ");
			printf("'%s': '%s'", buffer->key, buffer->value);
			buffer = buffer->next;
		}
		
		printed++;
	}

	printf("}\n");
}
