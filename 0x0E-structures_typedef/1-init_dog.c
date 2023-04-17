#include "dog.h"
/**
 * struct dog - a structure representing a dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner's name of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
