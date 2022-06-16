#include "main.h"

/**
 * _strncat - prints a string, in reverse, followed by a new line..
 * @dest: input integer.
 * @src: input integer
 * @n: the number of byte(s)
 * Return: no return.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		j++;
	}

	k = i + j;

	char buffer[k];

	for (k = 0; k < i; k++)
	{
		buffer[k] = src[k];
	}

	for (; k < (i + n); k++)
	{
		if (!dest[k - i])
			break;
		buffer[k] = dest[k - i];
	}

	src = buffer;
	return (buffer);
}
