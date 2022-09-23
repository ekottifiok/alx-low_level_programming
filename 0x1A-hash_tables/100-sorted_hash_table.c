#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *main_list;
	unsigned long int iter;

	main_list = malloc(sizeof(hash_table_t));
	if (main_list == NULL)
		return (NULL);
	main_list->size = size;
	main_list->array = malloc(sizeof(hash_node_t *) * size);
	if (main_list->array == NULL)
		return (NULL);
	for (iter = 0; iter < size; iter++)
		main_list->array[iter] = NULL;
	return (main_list);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *buffer, *h;
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
		h = ht->array[index];
		while (h->next != NULL)
			h = h->next;		

		h->next = buffer;
	}
	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
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

void shash_table_print(const shash_table_t *ht)
{
    unsigned long int size, printed;
	shash_node_t *buffer;

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

void shash_table_print_rev(const shash_table_t *ht)
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

void shash_table_delete(shash_table_t *ht)
{
    unsigned long int iter;

    for (iter = 0; iter < ht->size; iter++)
    {
        if (ht->array[iter] == NULL)
			continue;
        free_listint2(&ht->array[iter]);
        free(ht->array[iter]);
    }
    free(ht->array);
    free(ht);
}