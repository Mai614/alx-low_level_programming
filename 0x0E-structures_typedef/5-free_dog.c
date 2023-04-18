#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a dog structure
 *
 * @d: pointer to the dog structure
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);

free(d);
}
