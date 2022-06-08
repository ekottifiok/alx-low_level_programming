#include "main.h"
#include <stdio.h>

/* more headers goes there */
/**
 * main - Prints a to z
 *
 * Return: Nil
 */

int main(void)
{
	int i, 
	unsigned long int sum = 0;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) && (i % 5 == 0))
			sum += i;
	printf("%lu\n", sum);
	return (0);
}
