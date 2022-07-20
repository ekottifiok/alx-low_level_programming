#include "lists.h"

/**
 * listint_len - counts the size of the list
 *
 * @h: the pointer to the list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t buffer = 0;

	while (h)
	{	
		h = h->next;
		buffer++;
	}
	return (buffer);
}