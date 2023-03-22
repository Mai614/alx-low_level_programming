#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number for the sequence
 *
 * Description: This function prints all the natural numbers from "n" to 98,
 * separated by a comma and a space. If "n" is less than or equal to 98, the
 * function prints the numbers in ascending order. If "n" is greater than 98,
 * the function prints the numbers in descending order.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
