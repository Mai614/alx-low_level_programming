#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: pointer to string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
int lenghth_s;

while (s[lenghth_s] != '\0')
lenghth_s++;

for (i = lenghth_s - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
