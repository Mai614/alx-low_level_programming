#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase from a to z
 *
 * Description:
 *      This function prints the lowercase alphabet from 'a' to 'z'
 *      using the _putchar function.
 */
void print_alphabet(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

