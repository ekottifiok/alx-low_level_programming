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
	if (n < 98)
	{
		for (i = 0; n < 99; n++, i++)
		{
			if (i == 0)
			{
				if (n > 9)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
			}
			else
			{	_putchar(44);
				_putchar(32);
				if (n > 9)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
			}
		}
	}
	else if (n > 98)
	{
		for (i = 0; n > 97; i++, n--)
		{

			if (i == 0)
			{
				if (n > 99)
				{
					_putchar((n / 100) + '0');
					_putchar(((n / 10) % 10) + '0');
				}
				else if (n > 9)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				if (n > 99)
				{
					_putchar((n / 100) + '0');
					_putchar(((n / 10) % 10) + '0');
				}
				else if (n > 9)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n % 10) + '0');
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
