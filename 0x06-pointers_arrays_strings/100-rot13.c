#include "main.h"

/**
 * rot13 - replaces letters
 *
 * @n : hello
 * Return: the updated pointer
 */

char *rot13(char *n)
{
	char lookout[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replacement[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; lookout[j] != '\0'; j++)
		{
			if (n[i] == lookout[j])
			{
				n[i] = replacement[j];
				break;
			}
			else
			{
				continue;
			}
		}
	}
	return (n);
}
