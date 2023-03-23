#include "main.h"
/**
 * positive_or_negative - Check if n is positive, negative, or zero
 * @i: The integer to check
 *
 * This function takes an integer as input and prints whether it is positive,
 * negative, or zero.
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
