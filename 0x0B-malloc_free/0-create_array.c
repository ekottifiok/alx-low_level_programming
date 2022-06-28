#include "main.h"

/**
 * create_array - to create an array
 *
 * @size: size of array
 * @c: value to initialize
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pointer;

	if (size == 0)
		return (NULL);

	pointer = (char *)malloc(sizeof(char) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pointer[i] = c;

	pointer[i] = '\0';

	return (pointer);
}
