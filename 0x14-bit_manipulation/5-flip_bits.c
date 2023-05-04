#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int different = n ^ m;
unsigned int count = 0;

while (different > 0)
{

count += (different & 1);

different >>= 1;
	
}

return (count);
}

