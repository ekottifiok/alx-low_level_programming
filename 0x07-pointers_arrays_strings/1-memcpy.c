#include "main.h"

/**
 * _memcpy - copies a memory area to destination from source
 *
 * @dest: the destination area
 * @src: the source destination
 * @n: size of data
 * Return: char* a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i != n; i++, src++, dest++)
	{
		*dest = *src;
	}

	return (src);
}
