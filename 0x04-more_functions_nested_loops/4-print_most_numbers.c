#include "main.h"

/**
 * print_most_numbers - tests function
 * Return: 1 if uppercase and 0 otherwise
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}

		_putchar(i);
	}
	_putchar(10);
}
