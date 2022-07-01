#include "main.h"

/**
 * _realloc - reallocates the size of ptr
 *
 * @ptr: pointer to the string
 * @old_size: the old size of the pointer
 * @new_size: new size of the pointer
 * Return: void*
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	if (new_size > old_size)
		
	if (new_size == old_size)
		return (ptr);

	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);

	if (ptr == NULL)
		return (pointer);

	ptr = pointer;

	free(ptr);
	return (pointer);
}
