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
	void *new_ptr = NULL;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL && new_size != 0)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (ptr != NULL && (new_size > old_size))
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	new_ptr = malloc(new_size);
	return (new_ptr);
}

int main(int argc, char const *argv[])
{
	char *p;
	p = malloc(sizeof(char) * 30);
	p = _realloc(p, sizeof(char) * 30, sizeof(char) * 120);
	return 0;
}
