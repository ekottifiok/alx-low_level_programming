#include "main.h"

/**
 * print_square - tests function
 * @size: value inputted
 * Return: 1 if uppercase and 0 otherwise
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	

	while (i != size)
	{
		while (j != size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
	_putchar('\n');
}
