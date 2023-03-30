#include "main.h"
/**
 * reverse_array - reverse the array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;

i = n;
while (i > 0)
{
if (i != n)
{
printf(", ");
}
printf("%d", a[i - 1]);
i--;
}
printf("\n");
}
