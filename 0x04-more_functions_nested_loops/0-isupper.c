#include "main.h"

/**
 * _isupper - tests function that prints if integer is positive or negative
 * @c: int inputed
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
