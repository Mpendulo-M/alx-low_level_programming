#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid - frees up allocated memory
 *@grid: the grid
 *@height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);

}
