#include "main.h"
#include <stdio.h>

/* more headers goes there */
/**
 * print_to_98 - Prints a to z
 * @i: integer one
 * @n: integer two
 * Return: the sum of two values
 */

void print_to_98(int n)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		if (i == 0)
		{
			_putchar('0');
		}
		_putchar(44);
		_putchar(32);
		_putchar(i + '0');
	}

}
