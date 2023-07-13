#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function that frees previous strirng
 *@grid: pointer that points to grid previously created
 *@height: represents the height of the grid
 */
void free_grid(int **grid, int height)
{
int j;

for (j = 0; j <= height; j++)
{
free(grid[j]);
}
free(grid);
}
