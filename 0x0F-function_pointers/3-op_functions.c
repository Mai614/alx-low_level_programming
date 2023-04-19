#include "calc.h"

/**
 *op_add - Adds two integers
 *@a: The first integer to be added
 *@b: The second integer to be added
 *Return: The sum of the two integers
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - Subtracts two integers
 *@a: The integer to be subtracted from
 *@b: The integer to subtract
 *Return: The difference of the two integers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer to be multiplied
 * @b: The second integer to be multiplied
 * Return: The product of the two integers
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The integer to be divided
 * @b: The integer to divide by
 * Return: The quotient of the two integers
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(0);
}
return (a / b);
}

/**
 * op_mod - Computes the modulus of two integers
 * @a: The integer to be divided
 * @b: The integer to divide by
 * Return: The modulus of the two integers
 */
int op_mod(int a, int b)
{
return (a % b);
}
