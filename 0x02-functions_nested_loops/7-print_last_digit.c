#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
int lastdigit;
if (n < 0)
{
n = n *  -1;
}
lastdigit = n % 10;
_putchar(lastdigit + '0');
return (lastdigit);
}

