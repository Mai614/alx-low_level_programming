#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to modify
 * @index: the index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int size = sizeof(unsigned long int) * 8;
unsigned long int set;

if (index >= size)
return (-1);

set = 1 << index;
*n &= ~set;


return (1);
}
