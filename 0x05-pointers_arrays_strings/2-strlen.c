#include "main.h"
/**
 * _strlen - return the length of string
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
int length_char = 0;
while (*s != '\0')
{
length_char++;
s++;
}
return (length_char);
}
