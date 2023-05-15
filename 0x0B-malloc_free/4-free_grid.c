#include <stdlib.h>
#include "main.h"

/**
*free_grid - Frees the memory allocated for the grid created by alloc_grid().
*
*@grid: The grid to free.
*
*@height: The height of the grid.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	return;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
