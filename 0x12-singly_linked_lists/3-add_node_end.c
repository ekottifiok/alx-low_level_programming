#include "lists.h"

/**
 * add_node_end - add a node to the end
 *
 * @head: the pointer to the head pointer
 * @str: the new str
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *buffer;
	unsigned int strLen;

	for (strLen = 0; str[strLen] != '\0'; strLen++)
		;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->len = strLen;
	newNode->str = strdup(str);
	newNode->next = NULL;
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
