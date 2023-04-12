#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *Each element of the grid should be initialized to 0.
 *@width: width of the 2D array.
 *@height: height of the 2D array.
 *Return: pointer to the 2D array of integers or NULL if it fails.
 */

int **alloc_grid(int width, int height)
{
int **arr_2;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

arr_2 = malloc(height * sizeof(int *));
if (arr_2 == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
arr_2[i] = malloc(width * sizeof(int));
if (arr_2[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(arr_2[j]);
}
free(arr_2);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr_2[i][j] = 0;
}
}

return (arr_2);
}

