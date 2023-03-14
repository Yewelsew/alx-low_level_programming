#include "main.h"
#include <stdio.h>

#include "holberton.h"

/**
  * free_grid - ...
  * @grid: ...
  * @height: ...
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
