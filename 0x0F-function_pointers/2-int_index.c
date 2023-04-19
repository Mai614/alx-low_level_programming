#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to an array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to a function that takes an integer
 * as argument and returns an integer
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 *If no element matches, return -1
 *If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}

