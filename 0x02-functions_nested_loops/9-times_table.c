#include "main.h"


/* more headers goes there */
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

void times_table(void)
{
	int a, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;

			if (a == 0)
			{
				if (j > 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0');

			}
			else if (a > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else  if (a <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar((a % 10) + '0');
			}
			else
				_putchar(67);

		}
		_putchar(10);
	}
}
