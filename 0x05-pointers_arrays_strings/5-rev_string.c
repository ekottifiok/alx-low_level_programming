#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line..
 * @s: input integer.
 * Return: no return.
 */

void rev_string(char *s)
{
	int i, j, k;
	char buffer1, buffer2;

	// if (s[0] == '\0')
	// {
	// 	putchar('\n');
	// 	return;
	// }
	/**
	 * checks the length of the string and stores it in j
	 */
	while (1)
	{
		if (s[i])
		{
			i++;
			continue;
		}
		break;
	}
	/**
	 * copies the content of s to a buffer
	 */
	for (i--, j = i, k = 0; k <= i / 2; j--, k++)
	{
		buffer1 = s[j];
		buffer2 = s[k];
		s[k] = buffer1;
		s[j] = buffer2;
	}
}
