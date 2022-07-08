#include "variadic_functions.h"

/**
 * sum_them_all - adds all numbers from variable input
 *
 * @n: number of arguments
 * @...: variable input
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x, result;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0, x = 0, result = 0; i < n; i++)
	{
		x = va_arg(args, int);
		result += x;
	}
	va_end(args);
	return (result);
}
