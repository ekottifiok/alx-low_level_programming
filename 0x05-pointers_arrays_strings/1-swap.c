#include "main.h"

/**
 * swap_int - updates the value it points to to 98.
 * @a: input integer.
 * @b: input integer
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = *a;
}
