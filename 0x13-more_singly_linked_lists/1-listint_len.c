#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t buffer;

	for (buffer = 0; h; buffer++)
		h = h->next;

	return (buffer);
}