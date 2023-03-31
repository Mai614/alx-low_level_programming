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
char leet_chars[] = "1337";
char letters[] = "aAeEoOtTlL";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = leet_chars[j];
break;
}
}
}

/* Return a pointer to the modified string */
return (str);
}
