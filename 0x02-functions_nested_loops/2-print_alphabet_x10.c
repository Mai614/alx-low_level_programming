#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *
 * Description: This function uses a nested loop to print the lowercase
 * alphabet 10 times, with each set of letters on a new line. The outer loop
 * repeats the inner loop 10 times, and the inner loop prints the letters 'a'
 * through 'z' using the _putchar function.
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
