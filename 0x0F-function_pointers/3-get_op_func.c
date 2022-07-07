#include "3-calc.h"

/**
 * get_op_func - Get the op func object
 *
 * @s: char to be compared
 * Return: int(*)(int, int)
 */
int (*get_op_func(const char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;

	for (i = 0; ops[i].op; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
