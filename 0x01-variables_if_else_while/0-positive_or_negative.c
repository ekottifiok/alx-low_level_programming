#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char boolean[];

	if (n > 0)
		boolean = "negative";
	else
		boolean = "positve";
	printf("%d is %s", n,  boolean)
	return (0);
}
