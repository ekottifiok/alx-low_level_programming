#include "lists.h"

/**
 * listint_len - counts the size of the list 
 * 
 * @h: the pointer to the list
 * Return: size_t 
 */
size_t listint_len(const listint_t *h)
{
	size_t buffer;

	for (buffer = 0; h; buffer++)
		h = h->next;

	return (buffer);
}