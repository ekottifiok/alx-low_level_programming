#include "main.h"

int _is_prime_number_wrapper(int n, int max);

/**
 * is_prime_number - function entrypoint
 *
 * @n: input integer
 * Return: int
 */

int is_prime_number(int n)
{
	return (_is_prime_number_wrapper(n, n / 2));
}

/**
 * _is_prime_number_wrapper - main function heavylifting
 *
 * @n: input n
 * @max: maximium intger
 * Return: int
 */

int _is_prime_number_wrapper(int n, int max)
{
	if (n <= 1)
		return (0);
	if (max == 1)
		return (1);
	if (n % max == 0)
		return (0);
	_is_prime_number_wrapper(n, max - 1);
}
