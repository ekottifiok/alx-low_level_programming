#include "lists.h"

/**
 * add_nodeint - adds a new node to the start of the list
 *
 * @head: a pointer to a pointer list
 * @n: new nodes n
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
