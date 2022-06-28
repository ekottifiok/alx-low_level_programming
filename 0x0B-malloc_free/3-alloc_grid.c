#include "main.h"

/**
 * alloc_grid - allocates a grid
 *
 * @width: width of grid
 * @height: height of grid
 * Return: int**
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	unsigned int i, j;

	pointer = (int **)malloc(sizeof(int) * height);

	if (!pointer)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pointer[i] = (int *)malloc(sizeof(int) * width);
		if (!pointer[i])
		{
			free(pointer[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	}

	return (pointer);
}
