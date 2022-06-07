#include <main.h>

/* more headers goes there */
/**
 * print_sign - Entry point
 * @n: the integer to check
 * Return: 0 (Lowercase) or 1 (Uppercase)
 */
/* betty style doc for function main goes there */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		return (0);
	}

}

