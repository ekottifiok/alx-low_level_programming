#include "lists.h"

/**
 * print_list - prints the content list
 *
 * @h: the list
 * Return: size_t iteration the number of element in the list
 */
size_t print_list(const list_t *h)
{
	size_t iteration = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		iteration++;
	}
	return (iteration);
}
