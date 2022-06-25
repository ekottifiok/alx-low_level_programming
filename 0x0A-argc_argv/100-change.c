#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char const *argv[])
{
	int i, buffer, check[] = {25, 10, 5, 2, 1}, change, value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	for (change = 0, i = 0; value != 0; i++)
	{
		buffer = value / check[i];
		if (buffer > 0)
		{
			change += buffer;
			value -= (buffer * check[i]);
		}
	}

	printf("%d\n", change);
	return (0);
}
