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
	if (n <= 1)
		return (0);
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
	if (max == 1)
		return (1);
	if (n % max == 0 && max > 0)
		return (0);
	return (_is_prime_number_wrapper(n, max - 1));
}
