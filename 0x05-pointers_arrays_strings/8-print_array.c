#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a string, in reverse, followed by a new line..
 * @a: input integer.
 * @n: input integer
 * Return: no return.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", a[i]);
	}
	putchar('\n');
}
