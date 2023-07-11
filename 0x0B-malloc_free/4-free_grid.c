#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free a 2D grid previously created
 * by your alloc_grid function.
 * @grid: A pointer to an integer as array of integers.
 * @height: An integer as rows of an array.
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
