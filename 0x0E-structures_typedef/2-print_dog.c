#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints information about a dog
 * @d: pointer to a struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{

if (d)
{

printf("Name: %s\n", d->name != NULL ? d->name : "nil");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "nil");
}
}
