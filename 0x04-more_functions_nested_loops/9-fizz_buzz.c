#include "main.h"
#include <stdio.h>

/**
 * main - entry to function
 * Return: 1 if uppercase and 0 otherwise
 */

void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}

		printf("%d ", i);
	}
	printf("\n");
}
