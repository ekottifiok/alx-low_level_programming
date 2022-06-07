#include <main.h>


/* more headers goes there */
/**
 * print_alphabet - Prints a to z
 *
 * Returns: Nil
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar(10);
}
