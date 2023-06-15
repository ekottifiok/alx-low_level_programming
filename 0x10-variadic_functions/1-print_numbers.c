#include "variadic_functions.h"

/**
 * print_numbers - print numbers from variable input
 *
 * @separator: seperator of numbers
 * @n: the number of variable arguments
 * @...: the variable arguments found
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	if (separator == NULL)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i != 0)
			printf("%s", separator);
		printf("%d", x);
	}
	printf("\n");
}
