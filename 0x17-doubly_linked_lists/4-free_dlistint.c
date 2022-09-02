#include "lists.h"

/**
 * free_dlistint - frees up a list
 *
 * @head: the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head->prev)
		head = head->prev;

	while (head)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
}
