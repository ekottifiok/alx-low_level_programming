#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: input integer.
 * Return: no return.
 */

int _strlen(char *s)
{
    int i, j;

    for (i = 0, j = 0; 1; i++)
	{
		if (s[i])
		{
			j++;
		}
		else 
		{
			break;
		}
	}
	
	printf("%d", j);
}