#include "hash_tables.h"

/**
 * free_listint2 - frees a list
 *
 * @head: a pointer to a pointer list
 */
void free_listint2(hash_node_t **head)
{
	hash_node_t *buffer;

	if (!head)
		return;

	while (*head)
	{
		buffer = (*head)->next;
        free((*head)->key);
        free((*head)->value);
		free(*head);
		*head = buffer;
	}
	*head = NULL;
}

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