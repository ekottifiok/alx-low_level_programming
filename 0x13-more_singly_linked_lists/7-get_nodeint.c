#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int iter;
    listint_t *buffer;

    for (iter = 0; iter < index && head; iter++)
    {
        buffer = head->next;
    }
    return (buffer);
    
}