#include "main.h"


/* more headers goes there */
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(10);
		}
	}
}
