#include "lists.h"

/**
 * print_dlistint - prints the content of a dlistint
 *
 * @h: the list int to be printed
 * Return: size_t of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t iter;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;

	for (iter = 0; h != NULL; iter++, h = h->next)
		printf("%d\n", h->n);

	return (iter);
}
