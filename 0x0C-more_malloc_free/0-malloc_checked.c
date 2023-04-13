#include "main.h"
/**
 **malloc_checked - function that allocates memory by malloc
 *@b: the number of bytes to allocate
 *Return: a pointer to the allocated memory
 *if malloc fails, the malloc_checked function should cause normal
 *process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{

int *b_check = malloc(b);

if (b_check == 0)
exit(98);

return (b_check);

}
