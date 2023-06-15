#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a string
 *
 * @name: string of name
 * @f: function that prints the string
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
