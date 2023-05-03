#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;

size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
*h = NULL;

while (current != NULL)
{
tmp = current;
current = current->next;

free(tmp);
count++;

if (tmp <= current)
break;

}

return (count);

}
