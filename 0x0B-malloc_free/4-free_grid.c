#include "main.h"

/**
 * free_grid - free
 * @grid: grid
 * @height: heght
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
