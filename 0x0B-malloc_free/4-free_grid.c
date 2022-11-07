#include "main.h"

/**
* free_grid - a function that frees a 2 dimensional grid
* previously created by your alloc_grid function.
*
* @grid: memory block to be freed
* @height: height of the array
*
* Return: returns void
*/

void free_grid(int **grid, int height)
{
	int num;

	for (num = 0; num < height; num++)
		free(grid[num]);

	free(grid);
}

