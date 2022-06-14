#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: input pointer
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; 1; i++)
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
