

/**
 * _strcat - prints a string, in reverse, followed by a new line..
 * @dest: input integer.
 * @src: input integer
 * Return: no return.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
