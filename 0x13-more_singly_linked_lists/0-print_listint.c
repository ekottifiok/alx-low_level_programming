#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t buffer;

	for (buffer = 0; h; buffer++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (buffer);
}
