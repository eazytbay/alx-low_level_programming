#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - A function that returns a pointer to a 2D array of integers
 * @width: The width of the array
 * @height: the height of the array
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int x;
int y;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
x = 0;
while (x < height)
{
grid[x] = (int *)malloc(width * sizeof(int));
if (grid[x] == NULL)
{
while (x > 0)
{
x--;
free(grid[x]);
}
free(grid);
return (NULL);
}
y = 0;
while (y < width)
{
grid[x][y] = 0;
y++;
}
x++;
}
return (grid);
}
