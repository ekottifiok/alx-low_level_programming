#include "function_pointers.h"

/**
 * int_index - compares two numbers
 *
 * @array: pointer to an array
 * @size: size of array
 * @cmp: compare function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size && array && cmp; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
