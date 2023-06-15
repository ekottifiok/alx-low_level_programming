#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: the list to check from
 * @index: the position to check
 * Return: the found index dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *buffer;

	if (!head)
		return (0);
	for (buffer = head; buffer->prev; buffer = buffer->prev)
		;
	for (; buffer && index != 0; index--, buffer = buffer->next)
		;
	return (buffer);
}
