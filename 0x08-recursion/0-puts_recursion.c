#include "main.h"
/**
 * _puts_recursion - prints a string to
 * stdout followed by a newline character
 *
 * @s: pointer to the string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
int i = 0;

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}

_putchar('\n');

}
