#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function initializes an integer variable `i` to 0 and prints a message
 * to the standard output indicating that an infinite loop is about to start.
 * However, the loop is commented out, so it will not execute.
 * The program then prints a message to the standard output indicating that
 * the infinite loop was avoided by using a comment, and returns 0 to indicate
 * success.
 *
 * \\o/\n  represents a happy face with raised arms.
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
