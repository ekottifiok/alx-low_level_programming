#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: input pointer
 *
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{

		if (j % 2 == 0)
		{
			putchar(str[j]);
		}
	}
	putchar(10);
}
