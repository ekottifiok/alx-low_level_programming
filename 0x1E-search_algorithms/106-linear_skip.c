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
 * sub_linear_skip - the recursion part of the linear skip
 *
 * @list: pointer to the head of the skip list to search in
 * @prev_list: pointer to the head of the previous list
 * @value: value to be searched for in the list
 * @next_express: flags to decide next or express
 * Return: skiplist_t*
 */
skiplist_t *sub_linear_skip(skiplist_t *list, skiplist_t *prev_list,
int value, int next_express)
{
	skiplist_t *buffer = list;

	if (prev_list && buffer)
		print_array(buffer->index, 0, buffer->n, 1);
	if (buffer && buffer->n == value && !next_express)
	{
		return (buffer);
	}
	else if (buffer && buffer->n < value && buffer->next)
	{
		if (next_express && !buffer->express && buffer->next)
		{
			for (prev_list = buffer; buffer->next; buffer = buffer->next)
			;
			print_array(buffer->index, prev_list->index, 0, 0);
			return (sub_linear_skip(prev_list, prev_list, value, 0));
		}
		else if (next_express)
		{
			return (sub_linear_skip(buffer->express, buffer, value, 1));
		}
		else
		{
			return (sub_linear_skip(buffer->next, buffer, value, 0));
		}
	}
	else if (buffer && buffer->n >= value)
	{
		print_array(buffer->index, prev_list->index, 0, 0);
		return (sub_linear_skip(prev_list, prev_list, value, 0));
	}
	return (NULL);
}


/**
 * linear_skip -  searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: skiplist_t*
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	/* if next_express is 0 then next algo is used and when 1 is express algo */
	if (list)
		return (sub_linear_skip(list, NULL, value, 1));
	return (NULL);
}
