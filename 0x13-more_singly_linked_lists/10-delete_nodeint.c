#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at an index
 *
 * @head: a pointer to a pointer list
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int iter;
	listint_t *one_part, *buffer;

	if (!*head)
		return (0);
	buffer = (*head);
	if (index > 0)
	{
		for (iter = 0, index--; buffer && iter < index; iter++)
			buffer = buffer->next;
		one_part = buffer;
		buffer = buffer->next;
		iter = buffer->n;
		one_part->next = buffer->next;
		free(buffer);
	}
	else
	{

		*head = (*head)->next;
		free(buffer);
	}

	return (iter);
}
