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

	while (str[i] == '\0')
	{
		i++;
	}
	
	while(i != 0)
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i--;
	}
	_putchar(10);
}
