#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: input pointer
 *
 */

void puts2(char *str)
{
	int i, j, k;
	char buffer1, buffer2;

	if (str[0] == '\0')
	{
		putchar('\n');
		return;
	}
	/**
	 * checks the length of the string and stores it in j
	 */
	while (1)
	{
		if (str[i])
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
		buffer1 = str[j];
		buffer2 = str[k];
		str[k] = buffer1;
		str[j] = buffer2;
	}
}
