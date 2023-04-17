#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure representing a dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner's name of the dog
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
