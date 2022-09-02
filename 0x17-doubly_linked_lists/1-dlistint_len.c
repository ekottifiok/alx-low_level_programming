#include "lists.h"

/**
 * dlistint_len - finds the length of the list 
 * 
 * @h: the len of list int to be found
 * Return: size_t of the list
 */
size_t dlistint_len(const dlistint_t *h) 
{
    size_t iter;
    while (h->prev)
        h = h->prev;

    for (iter = 0; h != NULL; iter++, h = h->next)
        ;
    return (iter);
}
