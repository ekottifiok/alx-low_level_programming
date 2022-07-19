#include "lists.h"

int pop_listint(listint_t **head)
{
    int iter;
    listint_t *new_head;

    if (!head || !*head)
		return (0);
    new_head = (*head)->next;
    iter = (*head)->n;
    free(*head);
    *head = new_head;
    return (iter);
}
