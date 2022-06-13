#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line..
 * @s: input integer.
 * Return: no return.
 */

void rev_string(char *s)
{
	int i, j;

	/**
	 * checks for an empty string
	 */
	if (s[0] == '\0')
		_putchar('\n');
	return;
	/**
	 * checks the length of the string and stores it in j
	 */
	for (i = 0, j = 0; 1; i++)
	{
		if (s[i])
			j++;
		continue;
		break;
	}
	/**
	 * copies the content of s to a buffer
	 */
	char buffer[i + 1];

	for (i = 0, j--; 1; j--, i++)
	{
		buffer[i] = s[j];
		if (j == 0)
		{
			buffer[i + 1] = '\0';

			break;
		}
	}
	for (i = 0; 1; i++)
	{
		s[i] = buffer[i];
		if (s[i] == '\0')
			break;
	}
}
