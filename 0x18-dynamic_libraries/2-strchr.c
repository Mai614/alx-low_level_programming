#include "main.h"

/**
 *_strchr() - searches for 1st occurrence of character c in string s.
 *@s: pointer to the string to search
 *@c: the character to search for
 *Return: a pointer to the first occurrence of the character
 * c in the string s,or NULL if the character is not foun
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
