#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2 ,dimensional grid.
 * @grid: the grid to be freed.
 * @height: the height of the grid.
 *
 * Return: Nothing.
 *
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
