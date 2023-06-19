#include "main.h"

/**
 * _strlen - return the length of string
 * @s: The string.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{

int length = 0;

while (*s != '\0')
{
s++;
length++;
}

return (length);
}
