#include "lists.h"

/**
 * sum_listint - it reverses a list
 *
 * @head: a pointer to a pointer list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
