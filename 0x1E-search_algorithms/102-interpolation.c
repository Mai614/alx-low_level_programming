#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: If the value is found, return the index of the value in the array
 *         If the value is not found or the array is NULL, return -1
 *
 * Description: Performs interpolation search in sorted array and prints
 *              value
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, low, high;
double ext;

if (array == NULL)
return (-1);

low = 0;
high = size - 1;

while (size)
{
ext = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
pos = (size_t)(low + ext);
printf("Value checked array[%d]", (int)pos);

if (pos >= size)
{
printf(" is out of range\n");
break;
}
else
{
printf(" = [%d]\n", array[pos]);
}

if (array[pos] == value)
return ((int)pos);

if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;

if (low == high)
break;
}

return (-1);
}
