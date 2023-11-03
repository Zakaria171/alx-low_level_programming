#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees previous array
 * @grid: 2dimensional array
 * @height : integer
 * return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
