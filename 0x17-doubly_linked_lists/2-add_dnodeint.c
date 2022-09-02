#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of the list
 *
 * @head: the double node to be added
 * @n: the number to be added to the new node
 * Return: the modified dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head)
		new_node->next = *head;
	else
		new_node->next = NULL;
	*head = new_node;
	return (*head);
}
