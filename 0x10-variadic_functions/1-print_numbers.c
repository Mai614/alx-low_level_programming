#include "variadic_functions.h"

/**
 * print_numbers - prints a variable number of integers, separated by a string
 * @separator: string to separate integers
 * @n: number of integers to print
 * @...: variable number of integers to print
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list ap;
unsigned int i;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));

if (separator != NULL && i != n - 1)
printf("%s", separator);

}

va_end(ap);
printf("\n");
}
