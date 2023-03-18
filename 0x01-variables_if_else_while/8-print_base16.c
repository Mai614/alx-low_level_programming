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
}
for (letter = 'a' ; letter <= 'f' ; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
