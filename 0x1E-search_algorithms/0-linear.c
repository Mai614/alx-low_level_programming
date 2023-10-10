#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: If the value is found, return the index of the value in the array.
 *         If the value is not found or the array is NULL, return -1.
 *
 * Description: Prints the values
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
return (-1);

for (i = 0; i < size; ++i)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);

}
return (-1);
}
