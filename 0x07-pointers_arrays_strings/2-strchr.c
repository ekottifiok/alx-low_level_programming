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

	while (*s != '\0')
	{
		if (c == *s)
		{
			break;
		}
		s++;
	}

	if (*s == '\0')
		return (NULL);

	return (s);
}
