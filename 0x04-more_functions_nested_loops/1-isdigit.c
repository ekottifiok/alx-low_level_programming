#include "main.h"

/**
 * _isdigit - tests function that prints if integer is positive or negative
 * @c: int inputed
 * Return: 1 if uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	char d = c;

	if (d >= 48 && d <= 57)
	{
		return (1);
	}

	return (0);
}
