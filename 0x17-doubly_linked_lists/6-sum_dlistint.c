#include "lists.h"

/**
 * sum_dlistint - sums the content of the list
 *
 * @head: the list to find the sum
 * Return: the sum of the list int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;
	int sum_list;

	if (!head)
		return (0);
	for (buffer = head; buffer->prev; buffer = buffer->prev)
		;

	for (sum_list = 0; buffer; sum_list += buffer->n, buffer = buffer->next)
		;
	return (sum_list);
}
