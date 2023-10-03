#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2dimentional array
 * @grid: multidmentional array of int
 * @height: height dimension of grid
 *
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
