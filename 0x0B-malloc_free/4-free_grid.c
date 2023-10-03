#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2D grid
 * @grid: The previously created grid
 * @height: the height
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
int x = 0;
while (x < height)
{
free(grid[x]);
x++;
}
free(grid);
}
