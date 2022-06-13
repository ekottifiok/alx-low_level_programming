#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line..
 * @s: input integer.
 * Return: no return.
 */

void rev_string(char *s)
{
	int i, j;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	for (i = 0, j = 0; 1; i++)
	{
		if (s[i])
		{
			j++;
			continue;
		}

		break;
	}

		for (j--; 1; j--)
	{
		_putchar(s[j]);
		if (j == 0)
			break;
	}
	_putchar('\n');
}
