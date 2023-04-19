#include "function_pointers.h"

/**
 *print_name - prints a name using a function pointer
 *@name: pointer to a string containing the name to be printed
 *@f: pointer to a function that takes a char pointer
 *as argument and returns void
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{

if (name && f)
f(name);
}
