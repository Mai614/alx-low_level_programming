#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: pointer to string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
int i, n;
int len = 0;

while (str[len] != '\0')
len++;

if (len % 2 != 0)
{
n = (len - 1) / 2;
_putchar(str[n]);
}
else
{
for (i = (len / 2); i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
