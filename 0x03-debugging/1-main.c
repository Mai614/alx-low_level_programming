#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * This function is the entry point for the program. It initializes an integer
 * variable `i` to 0 and then prints a message indicating that an infinite loop
 * is about to start. However, the loop is commented out, so it will not execute.
 * Instead, the program prints a message indicating that the infinite loop was
 * avoided, and returns 0 to indicate success.
 * '\\o/\n"' Represents a happy face with raised arms
 *
 * Return: Always 0
 */
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/**
* while (i < 10)
*{
*putchar(i);
*}
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
