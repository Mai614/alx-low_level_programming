#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: On success, returns a pointer to the duplicated string.
 * On failure, returns NULL.
 */
char *_strdup(char *str)
{
size_t len;
char *new_str;
size_t i;
if (str == NULL)
{
return (NULL);
}


len = strlen(str) + 1;
new_str = malloc(len);

if (new_str == NULL)
{
return (NULL);
}

for (i = 0; i < len; i++)
{
new_str[i] = str[i];
}

return (new_str);
}
