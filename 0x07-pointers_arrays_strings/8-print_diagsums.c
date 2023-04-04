#include "main.h"
/**
 * print_diagsums - Prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: Pointer to an integer array that represents the square matrix.
 * @size: The size of the square matrix.
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - i - 1));
}

printf("%d\n", sum1);
printf("%d\n", sum2);
}

