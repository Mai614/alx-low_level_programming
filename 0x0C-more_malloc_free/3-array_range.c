#include "main.h"
/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value to be included in the array
 * @max: maximum value to be included in the array
 *
 * Return: pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{

unsigned int i;
int *arr;
size_t size_arr;
if (min > max)
return (NULL);

size_arr = max - min + 1;
arr = malloc(size_arr *sizeof(int));

if (arr == NULL)
return (NULL);

for (i = 0; i < size_arr; i++)
arr[i] = min + i;

return (arr);
}
