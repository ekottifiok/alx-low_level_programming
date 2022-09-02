#include "lists.h"

/**
 * len_dlistint_8 - finds the length of list
 *
 * @list: the list to be found
 * Return: an unsigned int containing the list
 */
unsigned int len_dlistint_8(dlistint_t *list)
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
 * delete_dnodeint_at_index - deletes a node at a particular index
 *
 * @head: the list to delete a node
 * @index: the position to be deleted
 * Return: -1 for failure and 1 for success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len_list, position = index;
	dlistint_t *buffer, *next_buffer;

	len_list = len_dlistint_8(*head);
	if (index > len_list || !(*head) || len_list == 0)
		return (-1);

	if (index == 0)
	{
		if (!(*head)->next && !(*head)->prev)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		return (1);
	}
	buffer = *head;
	for (; buffer && position > 1; position--, buffer = buffer->next)
		;
	next_buffer = (buffer->next)->next;
	free(buffer->next);
	if (index == (len_list - 1))
		buffer->next = NULL;
	else
		buffer->next = next_buffer;
	next_buffer->prev = buffer;
	return (1);
}
