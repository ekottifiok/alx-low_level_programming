#include "main.h"

/**
 * str_concat - joins two strings
 *
 * @s1: string one
 * @s2: string two
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	unsigned int i, j, k;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		continue;

	pointer = (char *)malloc(sizeof(char) * i);
	if (!pointer)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		pointer[j] = s1[j];

	for (k = 0; s2[k] != '\0'; j++, k++)
		pointer[j] = s2[k];

	pointer[i + j] = '\0';

	return (pointer);
}
