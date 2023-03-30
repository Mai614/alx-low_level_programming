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

i = n - 1;
while (i >= 0)
{
if (i >= 0 && i != n - 1)
{
printf(", ");
}
printf("%d", a[i]);
i--;

}
printf("\n");
}
