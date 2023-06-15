#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: a pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
}
