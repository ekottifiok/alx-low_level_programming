#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of the list
 *
 * @head: the list to be modified
 * @n: the number to be added to the new node
 * Return: the modified list dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *buffer = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	} else
	{
		while (buffer->next)
			buffer = buffer->next;
		new_node->prev = buffer;
		buffer->next = new_node;
	}
	return (*head);
}
