#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int Numberz;
char letter;
for (Numberz = 0; Numberz < 10; Numberz++)
{
putchar('0' + Numberz);
if (Numberz == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
