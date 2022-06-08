#include "main.h"
#include <stdio.h>

/* more headers goes there */
/**
 * main - Prints a to z
 *
 * Returns: Nil
 */

void main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%d", i);

}
