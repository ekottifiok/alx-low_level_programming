

/**
 * _memcpy - copies a memory area to destination from source
 *
 * @dest: the destination area
 * @src: the source destination
 * @n: size of data
 * Return: char* a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
