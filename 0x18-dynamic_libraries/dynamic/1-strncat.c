

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

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; src[j] == '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
