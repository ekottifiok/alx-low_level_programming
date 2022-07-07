#include <stdio.h>
#include <stdlib.h>

/**
 * error - returns errors
 *
 * @status: status code of exit
 */
void error(int status)
{
	printf("Error");
	exit(status);
}

/**
 * main - function entrypoint
 *
 * @argc: number of arguments passed
 * @argv: arguments passed in array
 * Return: int
 */
int main(int argc, char const *argv[])
{
	char *array_opcode;
	int i, value;

	if (argc != 2)
		error(1);

	value = atoi(argv[1]);
	if (value < 0)
		error(2);

	array_opcode = (char *)main;
	for (i = 0; i < value; i++)
	{
		printf("%02hhx ", array_opcode[i]);
	}
	printf("\n");

	return (0);
}
