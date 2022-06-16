#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @n: pointer to string
 * Return: no return.
 */

char *cap_string(char *n)
{
	int i, j;
	char *seperator = "\n\t ,:.!?\"()){}";

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z' && j == 0)
		{
			n[j] -= 32;
		}
		for (i = 0; seperator[i] != '\0'; i++)
		{
			if (n[j] == seperator[i])
			{
				j++;
				if (n[j] >= 'a' && n[j] <= 'z')
					n[j] -= 32;
				j--;
			}
		}
	}
	return (n);
}
