#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the value to be set (converted to an unsigned char)
 * @n: the number of bytes to be filled
 *
 * Description: This function fills the first
 * n bytes of the memory area pointed
 *to by s with the constant byte b.
 * Returns a pointer to the memory area s.
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
