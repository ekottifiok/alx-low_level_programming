#include "main.h"

char *reverse_string(char *sample)
{
	int i, j;
	char *rev_sample;

	for (i = 0; sample[i] != '\0'; i++, j++)
	;
	rev_sample = malloc(sizeof(char) * (i+1));
	for (j = 0, i--; i >= 0; i--, j++)
		rev_sample[j] = sample[i];
	rev_sample[j] = '\0';
	return rev_sample;
}

/**
 * infinite_add - adds numbers in an array
 * @n1: first number
 * @n2: second l number
 * @r: result stored here
 * @size_r: how many values of r is needed
 * Return: The values found
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, buffer, m, value, iter, prev_value, new_value, position = 0, done = 0;
	size_t len_n1, len_n2;
	char *rev_n1 = reverse_string(n1), *rev_n2 = reverse_string(n2);

	/* find the length of n1 */
	for (len_n1 = 0; n1[len_n1] != '\0'; len_n1++)
	;
	/* find the length of n2 */
	for (len_n2 = 0; n2[len_n2] != '\0'; len_n2++)
	;
	for (iter = 0, position = 0; position < len_n1 || position < len_n2; position++, iter++)
	{
		if (done == 0)
			buffer = (rev_n1[iter] - '0') + (rev_n2[iter] - '0');
		else if (done == 2)
			buffer = rev_n1[iter] - '0';
		else if (done == 1)
			buffer = rev_n2[iter] - '0';
		if (buffer > 9)
		{
			new_value = r[position] + (buffer % 10);
			if (new_value > 9)
				r[position + 1] = (new_value / 10) + '0';
			buffer = new_value;
		}
		r[position] = (buffer % 10) + '0';
		if (rev_n1[iter+1] == '\0' && done == 0)
			done = 1;
		else if (rev_n2[iter+1] == '\0' && done == 0)
			done = 2;
	}
	free(rev_n1);
	free(rev_n2);
	r = reverse_string(r);
	return r;
}



int main(int argc, char const *argv[])
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
	char *res;
    res = infinite_add(n, m, r, 10);
	puts(res);
	return 0;
}
