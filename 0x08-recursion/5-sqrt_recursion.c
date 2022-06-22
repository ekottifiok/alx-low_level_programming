#include "main.h"

int _sqrt_recursion_wrapper(int n, int max);

/**
 * _sqrt_recursion - main entry to function
 * @n: input integer
 * Return: the recurstion value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_wrapper(n, n / 2));
}

/**
 * _sqrt_recursion_wrapper - calls so that it can run
 *
 * @n: input integer
 * @max: maximium value
 * Return: integer
 */

int _sqrt_recursion_wrapper(int n, int max)
{
	if (max == 0)
		return (-1);
	if (max * max == n)
		return (max);
	return (_sqrt_recursion_wrapper(n, max - 1));
}
