#include "main.h"

/**
 * rot13 - replaces letters
 *
 * @n : hello
 * Return: the updated pointer
 */

char *rot13(char *n)
{
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0;; j++)
		{
			if ((n[i] >= 'a' && n[i] <= 'z') ||
				(n[i] >= 'A' && n[i] <= 'Z'))
			{
				n[i] += 13;
			}
		}
	}
}
