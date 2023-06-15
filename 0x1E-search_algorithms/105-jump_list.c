#include "search_algos.h"

/**
 * print_array - Print the array to search.
 * @index: index of the value position
 * @prev_index: index of the previous value position
 * @value: the value to be printed
 * @mode: there are two modes to be printed
 *
 * Return: void.
 */

void print_array(int index, int prev_index, int value, int mode)
{
	/* mode equals 1 */
	if (mode)
		printf("Value checked at index [%d] = [%d]\n", index, value);
	else
		printf("Value found between indexes [%d] and [%d]\n", prev_index, index);
}

/**
 * sub_jump_list - value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @prev_list: pointer to the previous list
 * @size: Size of the array to search.
 * @value: Value to search.
 * @step: the step to jump
 * @flag_next_buffer: flags to ensure correct printing
 * Return: listint_t*
 */
listint_t *sub_jump_list(listint_t *list, listint_t *prev_list, size_t size,
int value, int step, int flag_next_buffer)
{
	listint_t *buffer = list, *next_buffer;
	int iter;

	if (prev_list)
		print_array(buffer->index, 0, buffer->n, 1);

	if (buffer->n == value && step == 1)
	{
		return (buffer);
	}
	else if (buffer->n < value && buffer->next)
	{
		/* computes the next location */
		for (iter = 0, next_buffer = buffer; iter < step && next_buffer->next;
		iter++)
			next_buffer = next_buffer->next;
		if (!next_buffer->next && flag_next_buffer)
		{
			print_array(next_buffer->index, 0, next_buffer->n, 1);
			print_array(next_buffer->index, buffer->index, 0, 0);
			flag_next_buffer = 0;
			return (sub_jump_list(buffer, buffer, size, value, 1, flag_next_buffer));
		}
		return (sub_jump_list(next_buffer, buffer, size - 1,
		value, step, flag_next_buffer));
	}
	else if (buffer->n >= value)
	{
		print_array(buffer->index, prev_list->index, 0, 0);
		return (sub_jump_list(prev_list, prev_list, size, value, 1,
		flag_next_buffer));
	}
	return (NULL);
}

/**
 * jump_list -  searches for a value in a sorted
 * list of integers using the Jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: Size of the array to search.
 * @value: Value to search.
 * Return: listint_t*
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump_step = sqrt((double)size);

	/* if jump_linear is 0 then jump algo is used and when 1 is linear algo */
	if (list)
		return (sub_jump_list(list, NULL, size, value, jump_step, 1));
	return (NULL);
}
