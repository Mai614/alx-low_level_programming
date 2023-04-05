#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse to stdout
 *
 * @s: pointer to the string to be printed in reverse
 *
 * Return: none
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
if (*s != '\0')
{
_print_rev_recursion(s + 1);
}
_putchar(*s);
}
