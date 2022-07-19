#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    int iter;
    listint_t *one_part, *buffer;

    buffer = (*head);
    for (iter = 0; buffer && iter < (index - 1); iter++)
        buffer = buffer->next;
    
    one_part = malloc(sizeof(listint_t));
    if (!one_part)
        return (NULL);

    return (iter);
}