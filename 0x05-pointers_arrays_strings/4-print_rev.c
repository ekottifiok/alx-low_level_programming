#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line..
 * @n: input integer.
 * Return: no return.
 */

void print_rev(char *s)
{
    int i, j;

	for (i = 0, j = 0; 1; i++)
	{
		if (s[i])
		{
			j++;
			continue;
		}
		
		break;
	}

    for (; 1; j--)
	{
		_putchar(s[j]);
		if (j == 0)
			break;
	}
}