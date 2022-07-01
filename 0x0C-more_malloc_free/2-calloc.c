#include "main.h"

/**
 * _calloc - void pointers
 *
 * @nmemb: number of members
 * @size: size of array
 * Return: void*
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	size = nmemb * size;

	ptr = malloc(size);
	if (!(ptr))
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
