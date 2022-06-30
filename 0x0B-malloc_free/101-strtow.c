#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
// int count_word(char *s)
// {
// 	int flag, c, w;

// 	flag = 0;
// 	w = 0;

// 	for (c = 0; s[c] != '\0'; c++)
// 	{
// 		if (s[c] == ' ')
// 			flag = 0;
// 		else if (flag == 0)
// 		{
// 			flag = 1;
// 			w++;
// 		}
// 	}

// 	return (w);
// }
// /**
//  * **strtow - splits a string into words
//  * @str: string to split
//  *
//  * Return: pointer to an array of strings (Success)
//  * or NULL (Error)
//  */
char **strtow(char *str)
{
	// 	char **matrix, *tmp;
	// 	int i, k = 0, len = 0, words, c = 0, start, end;

	// 	while (*(str + len))
	// 		len++;
	// 	words = count_word(str);
	// 	if (words == 0)
	// 		return (NULL);

	// 	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	// 	if (matrix == NULL)
	// 		return (NULL);

	// 	for (i = 0; i <= len; i++)
	// 	{
	// 		if (str[i] == ' ' || str[i] == '\0')
	// 		{
	// 			if (c)
	// 			{
	// 				end = i;
	// 				tmp = (char *) malloc(sizeof(char) * (c + 1));
	// 				if (tmp == NULL)
	// 					return (NULL);
	// 				while (start < end)
	// 					*tmp++ = str[start++];
	// 				*tmp = '\0';
	// 				matrix[k] = tmp - c;
	// 				k++;
	// 				c = 0;
	// 			}
	// 		}
	// 		else if (c++ == 0)
	// 			start = i;
	// 	}

	// 	matrix[k] = NULL;

	// 	return (matrix);
	char **pointer, word_found[100], buffer, previousWord;
	int i, j, end, k, letter_found, *position;

	for (i = 0, letter_found = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'a' && str[i] <= 'z')
		{
			previousWord = str[i-1];
			if (!(previousWord >= 'a' && previousWord <= 'z' || previousWord >= 'A' && previousWord <= 'Z'))
				letter_found++;
			i++;
		}
	}

	pointer = (char **)malloc(sizeof(char) * letter_found);
	if (!pointer)
		return (NULL);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
			continue;
		
		for (end = 0; str[end+i] != ' '; end++)
		{	
			continue;
		}
		pointer[j] = (char *)malloc(sizeof(char) * (end +1));
		if (!pointer[j])
		{
			free(pointer);
			return (NULL);
		}
		for(k = 0; k < end; k++)
		{
			pointer[j][k] = str[k+i];
			word_found[k] = str[k+i];
		}
		pointer[j][k] = '\0';
		i += end;
		j++;

	}
	
	
	return (pointer);
}

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}