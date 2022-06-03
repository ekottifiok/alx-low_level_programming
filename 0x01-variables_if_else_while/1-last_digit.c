#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
	int lastDigit = n % 10;
	char *data;

	if (lastDigit > 5)
		data = "and is greater than 5\n";
	else if (lastDigit == 0)
		data = "and is 0\n";
	else if (lastDigit > 6 || lastDigit != 0)
		data = "and is less than 6 and not 0\n";
	else
		printf("Impossible %d\n", n);
	printf("Last digit of %d is %d %s", n, lastDigit, data);
	return (0);
}
