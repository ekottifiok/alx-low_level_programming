#include "main.h"
#include <stdio.h>

/**
 * _strcpy - prints a string, in reverse, followed by a new line..
 * @dest: input integer.
 * @src: input integer
 * Return: no return.
 */

char *_strcpy(char *dest, char *src)
{
	char buffer, *ptr;

	if (dest == NULL)
	{
		return (NULL);
	}

	*ptr = dest;

	while (*src != '\0')
	{
		buffer = *src;
		*dest = buffer;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
