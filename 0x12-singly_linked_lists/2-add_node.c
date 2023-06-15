#include "lists.h"

/**
 * add_node - adds a node pointer
 *
 * @head: the pointer to the head pointer
 * @str: the new str
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t strLen;

	for (strLen = 0; str[strLen] != '\0'; strLen++)
		;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->len = strLen;
	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
