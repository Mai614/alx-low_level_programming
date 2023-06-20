#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of specified characters.
 * @s: The string to search.
 * @accept: The set of characters to search for.
 *
 * Return: A pointer to the first occurrence of any of the characters in
 * `accept`, or NULL if none of the characters are found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}

