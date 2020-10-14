#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid -
 * @width:
 * @height:
 * Return:
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;
	if (width <= 0 || height <= 0)
		return(NULL);
	grid = (int **)malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * height);
		if(grid[i] == NULL)
			return (NULL);
	}
	for(i = 0; i < width; i++)
	{
		for(j = 0; j < height;j++)
			grid[i][j] = 0;

	}
	return(grid);
}
