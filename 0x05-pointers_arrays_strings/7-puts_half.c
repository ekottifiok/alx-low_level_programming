#include <stdio.h>

/**
 * puts_half - prints a string, in reverse, followed by a new line..
 * @str: input integer.
 * Return: no return.
 */

void puts_half(char *str)
{
	int i = 0, j;
	/**
	 * checks the length of the string and stores it in j
	 */
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		for (j = ((i + 1) / 2); j < i; j++)
		{
			putchar(str[j]);
		}
		putchar(10);
		return;
	}

	for (j = i / 2; j < i; j++)
	{
		putchar(str[j]);
	}
	putchar(10);
}
