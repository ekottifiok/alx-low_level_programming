#include "main.h"

/**
 * _puts_recursion - recursion function
 *
 * @s: input character
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
