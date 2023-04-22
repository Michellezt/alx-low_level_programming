#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid
  * @grid: 2 dimensional grid
  * @height: height dimension
  * Return: 0
  */

void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (n = 0; n < height;  n++)
	{
		free(grid[n]);
	}
	free(grid);
}
