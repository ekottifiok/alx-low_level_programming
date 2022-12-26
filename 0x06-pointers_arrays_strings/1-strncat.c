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
	int i, j;

	/* counter for dest */
	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; src[j] != '\0' && j < n; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}

int main(int argc, char const *argv[])
{
	char s1[98] = "Holberton ", s2[] = "School!\n";
	char *test = _strncat(s1, s2, 5);
	puts(test);
	return 0;
}
