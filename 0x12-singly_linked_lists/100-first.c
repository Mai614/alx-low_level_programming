#include <stdio.h>

/**
 * premain - prints a message before the main function is executed
 *
 * Return: nothing
 */

void __attribute__ ((constructor)) premain()
{
printf(
"You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
