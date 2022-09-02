#include "lists.h"

/**
 * len_dlistint_7 - finds the length of list
 *
 * @list: the list to be found
 * Return: an unsigned int containing the list
 */
unsigned int len_dlistint_7(dlistint_t *list)
{
	unsigned int iter;

	if (!list)
		return (0);
	while (list->prev)
		list = list->prev;
	for (iter = 0; list; iter++, list = list->next)
		;
	return (iter);
}

/**
 * insert_dnodeint_at_index - insert a node at a particular index
 *
 * @h: the list to add the new node
 * @idx: the index to add the node
 * @n: the number for the new node
 * Return: a new node dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *buffer, *next_buffer;
	unsigned int len_list, position = idx;

	len_list = len_dlistint_7(*h);
	if (!(*h) || idx > len_list || len_list == 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	buffer = *h;
	for (; buffer && position > 1; position--, buffer = buffer->next)
		;
	next_buffer = buffer->next;
	buffer->next = new_node;
	/**
	 * takes care of the next value
	 */
	if (idx == (len_list - 1))
		new_node->next = NULL;
	else
		new_node->next = next_buffer;
	/**
	 * takes care of the prev value
	 */
	if (idx == 0)
		new_node->prev = NULL;
	else
		new_node->prev = buffer;


	return (*h);
}
