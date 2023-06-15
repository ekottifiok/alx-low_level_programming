#include "hash_tables.h"

/**
 * hash_table_print_rev -  prints a hash table but in reverse
 * @ht: the hash table to be printed
 */
void hash_table_print_rev(const hash_table_t *ht)
{
	long int size, printed;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (size = ht->size-1, printed = 0; size > -1; size--)
	{
		if (ht->array[size] == NULL)
			continue;
		if (printed > 0)
			printf(", ");
		printf("'%s': '%s'", ht->array[0]->key, ht->array[0]->value);
		printed++;
	}

	printf("}\n");
}
