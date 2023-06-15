#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _printf(char *str, ...)
{
	int i;
	va_list list;
	char *buffer;

	va_start(list, str);
	if (str)
	{
		for (i = 0; str[i]; i++)
		{
			if (str[i] == '%')
			{
				switch (str[i + 1])
				{
				case 'd':
					printf("%d", va_arg(list, int));
					continue;
				case 'c':
					_putchar(va_arg(list, int));
					continue;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					continue;
				case 'f':
					printf("Floating\n");
					continue;
				default:
					_putchar(str[i]);
					continue;
				}
			}
			printf("%c", str[i]);
		}
	}
	printf("\n");
	va_end(list);
}

void main(void)
{
	_printf("Hello %d character %c", 55, 'c');
}