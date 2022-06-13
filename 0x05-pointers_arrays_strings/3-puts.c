#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: input character.
 * Return: no return.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; 1; i++)
	{
		if (str[i])
		{
			_putchar(str[i]);
			continue;
		}
		break;
	}
}
