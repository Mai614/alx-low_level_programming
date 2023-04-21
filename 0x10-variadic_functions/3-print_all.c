#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *          c -> char
 *          i -> integer
 *          f -> float
 *          s -> char * (string)
 */
void print_all(const char * const format, ...)
{
int i = 0, j = 0;
float f_val;
char *s_val, *separator = "";

va_list args;
va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
f_val = (float)va_arg(args, double);
printf("%s%f", separator, f_val);
break;
case 's':
s_val = va_arg(args, char *);
if (s_val != NULL)
printf("%s%s", separator, s_val);
else
printf("%s(nil)", separator);
break;
default:
j++;
continue;
}
separator = ", ";
j++;
i++;
}
va_end(args);
printf("\n");
}
