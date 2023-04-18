#include "dog.h"
#include <string.h>
#include <stdlib.h>



dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *new;
new = (dog_t*) malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);

new->name = (char*) malloc(strlen(name) + 1);
new->owner = (char*) malloc(strlen(owner) + 1);
new->age = (float) malloc(sizeof(float) + 1);
if (new->name == NULL || new->owner == NULL)
{
free(new);
return (NULL);
}
return new;
}
