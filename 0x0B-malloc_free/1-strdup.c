#include "main.h"

/**
 * _strdup -  returns a pointer to a newly created space
 *
 * @str: value to initialize the space
 * Return: a pointer to a char
 */

char *_strdup(char *str)
{
	char *pointer;
	unsigned int i, j;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	pointer = (char *)malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
		pointer[j] = str[j];

	pointer[j] = '\0';

	return (pointer);
}
