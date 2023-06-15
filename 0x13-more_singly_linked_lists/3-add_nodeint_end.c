#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list
 *
 * @head: a pointer to a pointer list
 * @n: the new node's value
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *buffer, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;
	buffer = *head;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (buffer->next)
		{
			buffer = buffer->next;
		}
		buffer->next = newNode;
	}

	return (newNode);
}
