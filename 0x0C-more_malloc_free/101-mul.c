#include "main.h"

#define STR_TO_INT(val) (val - 48)
#define INT_TO_STR(val) (val + 48)

/**
 * add_to_result - adds to string from buffer based on the position
 *
 * @string: pointer to the original string
 * @position: for the next iteration
 * @buffer: the result to be added
 * Return: char*
 */
char *add_to_result(char *string, int position, int buffer)
{
	int remainder, m;

	string[position] = INT_TO_STR(buffer % 10);
	if (buffer > 9)
	{
		remainder = buffer / 10;
		for (m = position - 1; string[position] < 9; m--)
		{
			string[m] = INT_TO_STR(remainder + STR_TO_INT(string[m]));
			remainder = 0;
		}
		string[m] = INT_TO_STR(remainder + STR_TO_INT(string[m]));
	}
	return (string);
}

/**
 * rid_zeros - removes all the trailing zeros from result
 *
 * @string: pointer to the original string
 * @length: length of string
 * Return: char*
 */
char *rid_zeros(char *string, int length)
{
	int flag, iteration;
	char *replica;

	replica = malloc(sizeof(char) * length);

	for (flag = 0, iteration = 0; *string; string++)
	{
		if (*string != '0' || flag != 0)
		{
			flag = 1;
			*replica = *string;
			replica++;
			continue;
		}
		iteration++;
	}
	return (replica - length + iteration);
}

/**
 * is_int - check for the integer in the string
 *
 * @string: original string
 * Return: int
 */

int is_int(const char *string)
{
	int character;

	for (; *string; string++)
	{
		character = STR_TO_INT(*string);
		if (character >= 0 && character <= 9)
			continue;
		return (1);
	}
	return (0);
}

/**
 * error - takes care of errors
 *
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * length - measures the length of string
 *
 * @string: original string
 * Return: int
 */
int length(const char *string)
{
	int length;

	for (length = 0; string[length]; length++)
		;
	return (length);
}

/**
 * preliminary_checks - makes some preliminary checks on the string
 *
 * @total: total number of items in the string
 * @str1: string representing integer 1
 * @str2: string representing integer 2
 */
void preliminary_checks(int total, char const *str1, char const *str2)
{
	if (total != 3)
		error();
	if (!(is_int(str1) == 0 && is_int(str2) == 0))
		error();
}

/**
 * print_answer - prints the answer
 *
 * @string: original string
 */

void print_answer(char const *string)
{
	for (; *string; string++)
		_putchar(*string);
	_putchar('\n');
}

/**
 * main - entrypoint to the function
 *
 * @argc: total number of values int
 * @argv: pointer to the original values
 * Return: int
 */

int main(int argc, char const *argv[])
{
	int character1, character2, int_buffer, i, j, k, l;
	int length_s1, length_s2, length_buffer, position, total_length;
	char *result;
	char const *ptr1 = argv[1], *ptr2 = argv[2], *buffer;

	preliminary_checks(argc, ptr1, ptr2);
	length_s1 = length(ptr1);
	length_s2 = length(ptr2);
	if (length_s1 < length_s2)
	{
		buffer = ptr1;
		ptr1 = ptr2;
		ptr2 = buffer;
		length_buffer = length_s1;
		length_s1 = length_s2;
		length_s2 = length_buffer;
	}
	total_length = length_s1 * length_s2;
	result = malloc(sizeof(char) * total_length);
	if (!result)
		return (1);
	result[total_length] = '\0';
	for (i = 0; i < total_length; i++)
		result[i] = INT_TO_STR(0);
	for (i = length_s2 - 1, int_buffer = 0, position = total_length - 1, l = 0;
		 i >= 0; i--, l++)
	{
		character2 = STR_TO_INT(ptr2[i]);
		for (j = length_s1 - 1, k = 0; j >= 0; j--, position--, k++)
		{
			character1 = STR_TO_INT(ptr1[j]);
			int_buffer = (character1 * character2) + STR_TO_INT(result[position]);
			result = add_to_result(result, position, int_buffer);
		}
		position = total_length - l - 2;
	}
	result = rid_zeros(result, total_length);
	print_answer(result);
	free(result);
	return (0);
}
