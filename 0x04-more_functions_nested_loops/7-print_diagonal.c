#include "main.h"

/**
 * print_diagonal - tests function
 * @n: value inputted
 * Return: 1 if uppercase and 0 otherwise
 */

void print_diagonal(int n)
{

	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i != n)
	{
		if (i > 0)
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
