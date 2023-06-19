#include "main.h"

/**
 * _isdigit - Checks if a c is adigit or not.
 * @c: The number to be checked.
 *
 * Return: 1 if c is digit, 0 otherwise.
 */
int _isdigit(int c)
{

if (c >= '0' && c <= '9')
return (1);

else
return (0);

}
