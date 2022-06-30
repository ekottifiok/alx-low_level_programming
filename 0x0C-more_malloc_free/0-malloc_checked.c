#include "main.h"

/**
 * malloc_checked - unsigned integer
 *
 * @b: size of malloc to be created
 * Return: void*
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (!pointer)
		exit(98);
	return (pointer);
}
