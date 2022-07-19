#include "lists.h"

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
