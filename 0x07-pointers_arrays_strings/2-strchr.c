#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: input character
 * @c: input character
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;
	char *buffer;

	buffer = s;
	while (buffer != '\0')
	{
		if (c == *buffer)
		{
			break;
		}
		buffer++;
	}
	return (buffer);
}
