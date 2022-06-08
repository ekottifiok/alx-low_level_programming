#include "main.h"
#include <stdio.h>

/* more headers goes there */
/**
 * print_to_98 - Prints a to z
 *
 * @n: integer two
 * Return: the sum of two values
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = 0; n < 99; n++, i++)
		{
			if (i == 0)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
		}
	}
	else if (n > 98)
	{
		for (i = 0; n > 97; i++, n--)
		{

			if (i == 0)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
		}
	}
	else
	{
		if (n > 9)
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar(10);
}
