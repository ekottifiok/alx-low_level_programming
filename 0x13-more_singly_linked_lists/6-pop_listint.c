#include "lists.h"

/**
 * pop_listint - it removes a node and returns the value removed
 *
 * @head: a pointer to a pointer list
 * Return: poped value
 */
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
