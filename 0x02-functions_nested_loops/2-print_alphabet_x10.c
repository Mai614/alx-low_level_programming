#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase from a to z
 *
 *      This function prints the lowercase alphabet from 'a' to 'z' ten times,
 *      using the _putchar function. It does this by first initializing a loop
 *      that will run ten times, and then for each iteration of that loop, it
 *      initializes another loop that prints each letter of the alphabet using
 *      _putchar.
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0, letter;
while (i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
i++;
_putchar('\n');
}
}
