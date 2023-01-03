#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	int diff, iter, jump_linear = 0, jump_step;
	/* if jump_linear is 0 then jump algo is used and when 1 is linear algo */

	jump_step = sqrt((double)size);
	for (iter = 0; iter < (int)size;)
	{
		printf("Value checked array[%d] = [%d]\n", iter, array[iter]);
		if (array[iter] >= value && jump_linear == 0)
		{
			diff = iter - jump_step;
			printf("Value found between indexes [%d] and [%d]\n", diff, iter);
			iter -= jump_step;
			jump_linear = 1;
		}
		if (value == array[iter])
			return (iter);
		else if (jump_linear)
			iter++;
		else if (jump_linear == 0)
			iter += jump_step;
	}
	return (-1);
}
