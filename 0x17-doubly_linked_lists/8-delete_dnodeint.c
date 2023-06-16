#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * a given position in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp1;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;

if (*head != NULL)
(*head)->prev = NULL;

free(current);
return (1);
}

for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);

current = current->next;
}

if (current == NULL)
return (-1);

temp1 = current;
current->prev->next = current->next;

if (current->next != NULL)
current->next->prev = current->prev;
free(temp1);

return (1);
}
