#include "main.h"
/**
 * _strncat - concatenates two strings up to n bytes from src
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be concatenated from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
