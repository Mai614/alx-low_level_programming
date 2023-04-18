#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @len: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *len)
{
int i;
i = 0;

while (len[i] != '\0')
{
i++;
}
return (i);
}

/**
 *_strcpy - Copies a string from source to destination
 *@dest: Destination buffer
 *@src: Source string
 *Return: Pointer to destination buffer
 */

char *_strcpy(char *dest, char *src)
{
int lens, i;
lens = 0;

while (src[lens] != '\0')
{
lens++;
}

for (i = 0; i < lens; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}


/**
 * new_dog - creates a new dog struct
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner's name of the dog
 * Return: pointer to the new dog struct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;


len1 = _strlen(name);
len2 = _strlen(owner);


dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);


dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
