#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 *
 * @s: pointer to a character
 * @b: a character
 * @n:  an unsigned int
 * Return: a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; i != n; i++, s++)
	{
		*s = b;
	}

	return (s);
}
