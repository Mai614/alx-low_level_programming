#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
{

return (current);

}

count++;
current = current->next;

}

return (NULL);

}
