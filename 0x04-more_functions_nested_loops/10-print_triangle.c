#include "main.h"
#include <stdio.h>

/**
 * print_triangle - entry to function
 * @size: given by the function
 * Return: 1 if uppercase and 0 otherwise
 */

void print_triangle(int size)
{
	int size = 3;
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < (1 + i); j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
