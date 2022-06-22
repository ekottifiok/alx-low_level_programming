#include "main.h"

/**
 * factorial - factorial recursion function
 *
 * @n: input character
 * Return: int
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
