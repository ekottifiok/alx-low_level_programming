#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @n: pointer to string
 * Return: no return.
 */


char *cap_string(char *n)
{
	int i;
	char *seperator = "\n\t ,:.!?\"()){}";

	while (*n != '\0')
	{
		for (i = 0; seperator[i] != '\0'; i++)
		{
			if (*n == seperator[i])
			{	
				n++;
				if (*n >= 'a' && *n <= 'z')
					*n = *n - 32;
				n--;
			}
		}
		
		n++;
	}
	return (n);
}