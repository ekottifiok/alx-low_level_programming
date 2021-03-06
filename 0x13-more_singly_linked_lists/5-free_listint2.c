#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: a pointer to a pointer list
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;

	if (!head)
		return;

	while (*head)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
	}
	*head = NULL;
}
