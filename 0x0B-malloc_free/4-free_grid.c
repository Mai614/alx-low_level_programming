#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid
 *@grid: Pointer to the 2D array of integers to be freed
 *@height: height of grid
 *Return: nothing
 */


void free_grid(int **grid, int height)
{

int i;

if (grid == NULL)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}


free(grid);

}
