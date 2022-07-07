#include "3-calc.h"

/**
 * main - function entrypoint
 *
 * @argc: number of arguments passed
 * @argv: arguments passed in array
 * Return: int
 */
int main(int argc, char const *argv[])
{
	int (*ptr_func)(int, int), arg2, return_value;
	char symbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr_func = get_op_func(argv[2]);
	if (!ptr_func)
	{
		printf("Error\n");
		exit(99);
	}
	arg2 = atoi(argv[3]);
	symbol = *argv[2];
	if ((symbol == '/' || '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return_value = ptr_func(atoi(argv[1]), arg2);

	printf("%d\n", return_value);
	return 0;
}
