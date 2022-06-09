#include "main.h"

/**
 * _isupper - tests function that prints if integer is positive or negative
 * @c: int inputed
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char d = c;

	if (d >= 65 && d <= 90)
	{
		return (1);
	}

	return (0);
}
