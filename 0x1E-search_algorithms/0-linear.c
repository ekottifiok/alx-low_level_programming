#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (array == NULL)
		return (-1);

	for (iter = 0; iter < size; iter++, array++)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, *array);
		if (value == *array)
			return (iter);
	}
	return (-1);
}
