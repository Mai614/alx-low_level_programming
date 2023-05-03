#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head pointer of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *current, *prev;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
current = *head;
*head = (*head)->next;

free(current);

return (1);
}

prev = *head;
current = (*head)->next;

for (i = 0; i < index; i++)
{

if (current == NULL)

return (-1);

prev = current;
current = current->next;
}

prev->next = current->next;
free(current);
return (1);
}
