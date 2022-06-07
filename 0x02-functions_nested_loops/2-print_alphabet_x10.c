#include <main.h>

/* more headers goes there */

/**
 * print_alphabet_x10 - Prints a to z ten times
 *
 * Returns: Nil
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
