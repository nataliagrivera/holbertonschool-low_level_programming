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

grid = (int **)malloc(sizeof(int *) * height);

if (grid == NULL)
{
	return (NULL);
}
for (i = 0; i < height; i++)
{
	grid[i] = (int *)malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		for (; i >= 0; i--)
			free(grid[i]);
		free(grid);
		return (NULL);
	}
}
return (grid);
}

