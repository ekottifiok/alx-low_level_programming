#include "main.h"

/**
 * _strcat - prints a string, in reverse, followed by a new line..
 * @dest: input integer.
 * @src: input integer
 * Return: no return.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}