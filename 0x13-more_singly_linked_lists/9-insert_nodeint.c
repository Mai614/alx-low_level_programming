#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position in a linked list
 * @head: pointer to the head pointer of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;

return (new_node);
}

prev = *head;

for (i = 0; i < idx - 1 && prev != NULL; i++)
prev = prev->next;

if (prev == NULL)
{
free(new_node);

return (NULL);
}

new_node->next = prev->next;
prev->next = new_node;

return (new_node);

}
