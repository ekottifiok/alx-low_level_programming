#include "search_algos.h"

/**
 * print_array - prints a given a array
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t iter;

	for (iter = 0; iter < size; iter++, array++)
	{
		if (iter == 0)
			printf("%d", *array);
		else
			printf(", %d", *array);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t iter;
	int middle, compare, left, right;

	for (iter = 0, left = 0, right = size - 1; size > 0; iter++)
	{
		middle = (int)floor((double)((left + right) / 2));
		printf("Searching in array: ");
		print_array(array + left, size);
		compare = *(array + middle);
		if (value == compare)
			return (middle);
		else if (value > compare)
			left = middle + 1;
		else if (value < compare)
			right = middle - 1;
		size = (right - left) + 1;
	}
	return (-1);
}
