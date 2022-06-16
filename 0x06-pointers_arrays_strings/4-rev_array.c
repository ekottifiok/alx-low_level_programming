#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input integer.
 * @n: input integer
 * Return: no return.
 */
void reverse_array(int *a, int n)
{

	int buffer, i;

	for (i = 0, n--; i < n / 2; i++)
	{

		buffer = a[n - i];
		a[n - i] = a[i];
		a[i] = buffer;
	}
}
