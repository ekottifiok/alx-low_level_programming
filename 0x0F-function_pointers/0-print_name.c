#include "main.h"
#include <stdio.h>

/**
 * print_name - prints a string
 *
 * @name: string of name
 * @f: function that prints the string
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
