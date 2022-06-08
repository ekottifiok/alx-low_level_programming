#include <stdio.h>

/* more headers goes there */
/**
 * print_to_98 - Prints a to z
 * @i: integer one
 * @n: integer two
 * Return: the sum of two values
 */

void main(void)
{
	int n = 141;
	int i;

	if (n < 98)
	{
		for (;n < 99; n++)
		{
			if (n == 0)
				putchar('0');
			putchar(44);
			putchar(32);
			if (n > 9)
			{
				putchar((n / 10) + '0');
			}
			putchar((n % 10) + '0');
		}
	}
	else if (n > 98)
	{
		for (i = 0; n > 97; i++, n--)
		{

			if (i == 0)
			{
				if (n > 99)
				{
					putchar((n / 100) + '0');
					putchar(((n / 10) % 10) + '0');
				}
				else if (n > 9)
				{
					putchar((n / 10) + '0');
				}
				putchar((n % 10) + '0');
			}
			else
			{	
				putchar(44);
				putchar(32);
				if (n > 99)
				{
					putchar((n / 100) + '0');
					putchar(((n / 10) % 10) + '0');
				}
				else if (n > 9)
				{
					putchar((n / 10) + '0');
				}
				putchar((n % 10) + '0');
			}
		}
		
	}
	else 
	{
		if (n > 9)
			putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}

}
