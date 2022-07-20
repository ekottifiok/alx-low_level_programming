#include "lists.h"

/**
 * get_nodeint_at_index - it get the value at list
 *
 * @head: a pointer to a pointer list
 * @index: the index
 * Return: listint_t*
 */
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
