#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL if nmemb
 * or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *ptr;
char *byte_ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

byte_ptr = (char *) ptr;
for (i = 0; i < nmemb * size; i++)
byte_ptr[i] = 0;

return (ptr);
}
