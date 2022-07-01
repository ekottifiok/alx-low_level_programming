#include "main.h"

/**
 * string_nconcat - joins two string
 *
 * @s1: first part of the string
 * @s2: second part of the string
 * @n: number of times the string should run
 * Return: char*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length_s1, length_s2, total, i, j;

	if (!(s1) && !(s2))
		return (NULL);

	for (length_s1 = 0; s1[length_s1]; length_s1++)
		;
	for (length_s2 = 0; s2[length_s2]; length_s2++)
		;

	if (n >= length_s2)
		return (s2);

	total = length_s1 + length_s2;
	if (n < length_s2)
	{
		ptr = (char *)malloc(sizeof(char) * (length_s1 + n + 1));
		total = length_s1 + n + 1;
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * (total + 1));
	}
	if (ptr == NULL)
		return (NULL);

	for (i = 0; *s1; i++, s1++)
		ptr[i] = *s1;

	for (; *s2 && n > 0; i++, s2++, n--)
		ptr[i] = *s2;

	ptr[i] = '\0';
	return (ptr);
}
