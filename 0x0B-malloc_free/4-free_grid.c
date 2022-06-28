#include "main.h"

/**
 * free_grid - produces a grid
 *
 * @grid: grid position
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	unsigned int i, j;

	for (i = 0; i < height; i++)
	{

		free(grid[i]);
	}
	free(grid);
}
