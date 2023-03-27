#include "main.h"
/**
 * swap_int - Swaps the values of two integer pointers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
int temp1 = *a;
int temp2 = *b;
*b = temp1;
*a = temp2;
}
