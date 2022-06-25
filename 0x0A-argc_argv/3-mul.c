#include "main.h"
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	int i, value1, value2;

	if (argc == 3)
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		printf("%d\n", (value1 * value2));
	}
	else
	{
		printf("Error\n %d", argc);
	}

	return (0);
}
