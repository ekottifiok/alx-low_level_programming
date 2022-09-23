#include "hash_tables.h"

/**
 * hash_table_delete - destroys a hash table
 *
 * @ht: the hash table to be destroyed
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int iter;
	hash_node_t *buffer1, *buffer2;

	for (iter = 0; iter < ht->size; iter++)
	{
		if (ht->array[iter] == NULL)
			continue;
		buffer1 = ht->array[iter];
		while (buffer1)
		{
			buffer2 = buffer1->next;
			free(buffer1->key);
			free(buffer1->value);
			free(buffer1);
			buffer1 = buffer2;
		}
		buffer1 = NULL;
	}
	free(ht->array);
	free(ht);
}
