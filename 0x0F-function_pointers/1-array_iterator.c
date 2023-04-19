#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: Pointer to an array of integers
 * @size: Size of the array
 * @action: Pointer to a function that takes
 * an integer as argument and returns void
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

