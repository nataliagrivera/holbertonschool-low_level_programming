#include "main.h"
#include <stdlib.h>
/**
 ***alloc_grid - allocates pointer to a grid
 *@width: represent width of grid
 *@height: represents height of grid
 *Return: return grid
 */
int **alloc_grid(int width, int height)
{
int i;
int **grid;

if (height <= 0 || width <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height);

if (grid == NULL)
{
	return (NULL);
	free(grid);
}
for (i = 0; i < width; i++)
{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		return (NULL);
		free(grid[i]);
	}
}
return (grid);
}

