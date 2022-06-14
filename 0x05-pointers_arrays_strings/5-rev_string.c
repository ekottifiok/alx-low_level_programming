#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line..
 * @s: input integer.
 * Return: no return.
 */

void rev_string(char *s)
{

	int i = 0, j;

	/**
	 * checks for an empty string
	 */
	/* char s[11] = "Holberton!"; */
	char buffer;

	/**
	 * checks the length of the string and stores it in j
	 */
	while (s[i] != '\0')
	{
		i++;
	}
	/**
	 * copies the content of s to a buffer
	 */
	for (j = 0, i--; j < i / 2; j++)
	{
		buffer = s[j];
		s[j] = s[i - j];
		s[i - j] = buffer;
	}
}
