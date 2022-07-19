#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *one_part, *buffer;
    unsigned int iter;
    
    buffer = (*head);
    for (iter = 0; buffer && iter < (idx-1); iter++)
        buffer = buffer->next;
    one_part = malloc(sizeof(listint_t));
    if (!one_part)
        return (NULL);
    one_part->n = n;
    one_part->next = buffer->next;
    buffer->next = one_part;
    return (*head);
}
