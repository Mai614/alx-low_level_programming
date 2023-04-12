#include "main.h"
#include <string.h>

#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to newly allocated string containing s1 followed by s2,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{

char *s3;
size_t len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = NULL;

if (s2 == NULL)
s2 = NULL;

s3 = malloc(len1 + len2 + 1);
if (s3 == NULL)
{
return (NULL);
}
len1 = strlen(s1);
len2 = strlen(s2);

memcpy(s3, s1, len1);
memcpy(s3 + len1, s2, len2);

s3[len1 + len2] = '\0';

return (s3);
free(s3);
}
