#include "variadic_functions.h"

void seperator(int n)
{
	if (n != 0)
		printf("%s", ", ");
}

void print_all(const char *const format, ...)
{
	va_list args;
	char type_char, *type_string;
	unsigned int i, n;
	int type_int;
	float type_float;
	const int *size;

	for (i = 0, n = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 'c' || format[i] == 'f' || format[i] == 'i' || format[i] == 's')
			n++;
	}
	size = &n;

	va_start(args, size);

	for (n = 0; n <= i; n++)
	{
		
		if (format[n] == 'c')
		{
			type_char = va_arg(args, int);
			seperator(n);
			printf("%c", type_char);
		}
		else if (format[n] == 'f')
		{
			type_float = va_arg(args, double);
			seperator(n);
			printf("%f", type_float);
		}
		else if (format[n] == 's')
		{
			type_string = va_arg(args, char *);
			seperator(n);
			if (type_string != NULL)
				printf("%s", type_string);
			else
				printf("(nil)");
		}
		else if (format[n] == 'i')
		{
			type_int = va_arg(args, int);
			seperator(n);
			printf("%d", type_int);
		}
	}

	printf("\n");
}

int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
