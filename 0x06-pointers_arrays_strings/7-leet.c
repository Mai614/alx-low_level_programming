#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433771100";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == s1[j])
{
str[i] = s2[j];
}
}
}
return (str);
}
