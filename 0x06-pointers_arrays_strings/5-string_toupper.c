#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @n: pointer to string
 * Return: no return.
 */

char *string_toupper(char *n)
{
	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - 32;
		}
		n++;
	}

	return (n);
}
