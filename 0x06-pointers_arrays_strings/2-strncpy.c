#include "main.h"

/**
 * _strncpy - prints a string, in reverse, followed by a new line..
 * @dest: input integer.
 * @src: input integer
 * @n: number of bytes())
 * Return: no return.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{

		dest[i] = src[i];
	}

	if (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
