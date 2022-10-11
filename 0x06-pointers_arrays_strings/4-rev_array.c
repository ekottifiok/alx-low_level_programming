#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input integer.
 * @n: input integer
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--) // j = 12 i = 0
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}



/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int)); //52 bytes = a 
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}