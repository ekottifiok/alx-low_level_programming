#include "main.h"

/**
 * print_square - tests function
 * @size: value inputted
 * Return: 1 if uppercase and 0 otherwise
 */

void print_square(int size)
{
	int i = 0, j = 0;

	while (i != size)
	{
		while (j != size)		
		{
			putchar('#');
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
	_putchar(10);
}
