#include "main.h"

/**
 * print_line - tests function
 * @n: value inputted
 * Return: 1 if uppercase and 0 otherwise
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i != n)
	{
		_putchar('_');
		i++;
	}
	_putchar(10);
}
