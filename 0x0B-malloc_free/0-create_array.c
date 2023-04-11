#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

arr = malloc(size * sizeof(char));


for (i = 0; i < size; i++)
{
arr[i] = c;
}

if (size == 0)
{
return (NULL);
}

if (arr == NULL)
{
return (NULL);
}
return (arr);
}
