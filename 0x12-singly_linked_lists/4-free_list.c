#include "lists.h"

/**
 * free_list - frees the content of the list
 *
 * @head: the pointer of the haed
 */
void free_list(list_t *head)
{
	list_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
