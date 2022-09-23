#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, printed;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (size = 0, printed = 0; size < ht->size; size++)
	{
		if (ht->array[size] == NULL)
			continue;
		if (printed > 0)
			printf(", ");
		printf("'%s': '%s'", ht->array[size]->key, ht->array[size]->value);
		printed++;
	}

	printf("}\n");
}
