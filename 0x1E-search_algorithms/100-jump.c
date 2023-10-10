#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: If the value is found, return the index of the value in the array.
 *         If the value is not found or the array is NULL, return -1.
 *
 * Description: Performs jump search in the sorted array and prints values
 */

int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size);
size_t prev = 0;
size_t current = step;
size_t i;

if (array == NULL)
return (-1);

while (current < size && array[current] < value)
{
printf("Value checked array[%lu] = [%d]\n", current, array[current]);
prev = current;
current += step;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, current);

for (i = prev; i <= current && i < size; ++i)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
