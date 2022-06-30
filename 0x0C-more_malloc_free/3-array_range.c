#include "main.h"

/**
 * array_range - range of array
 *
 * @min: minimium number of array
 * @max: maximium number of array
 * Return: int*
 */

int *array_range(int min, int max)
{
	int length, *ptr;

	if (min > max)
		return (NULL);

	length = (max - min + 1);
	ptr = malloc(sizeof(int) * length);

	if (!ptr)
		return (NULL);

	for (; min <= max; ptr++, min++)
		*ptr = min;

	*ptr = '\0';
	return (ptr - length);
}
