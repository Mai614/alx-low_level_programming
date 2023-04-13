#include "main.h"

#include <string.h>
/**
 * string_nconcat - Concatenates two strings up to a certain number of bytes
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: If successful - a pointer to the concatenated string
 *         If failure - NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t s1_len, s2_len;
char *concatinate;
unsigned int i;

if (s1 == NULL)
s1 = " ";

if (s2 == NULL)
s2 = " ";

s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
{
n = s2_len;
}

concatinate = (char *) malloc(s1_len + n + 1);

if (concatinate == NULL)
{
return (NULL);
}

for (i = 0; i < s1_len; i++)
concatinate[i] = s1[i];

for (i = 0; i < n; i++)
concatinate[s1_len + i] = s2[i];

concatinate[s1_len + n] = '\0';

return (concatinate);

}
