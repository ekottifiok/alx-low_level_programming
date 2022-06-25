#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	int i;

	if (argc == 3)
	{
		printf("%d\n", (*argv[2]) * (*argv[2]));
	}
    else
    {
        printf("Error\n %d", argc);
    }
    

	return (0);
}