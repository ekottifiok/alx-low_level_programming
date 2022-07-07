#include "function_pointers.h"

/**
 * array_iterator - moves through an array and runs a function
 *
 * @array: pointer to an array
 * @size: size of array
 * @action: function that takes in an int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
