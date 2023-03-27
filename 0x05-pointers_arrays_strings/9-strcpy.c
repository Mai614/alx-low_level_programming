#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
}
while (src[i] != '\0');
return (dest);
}
