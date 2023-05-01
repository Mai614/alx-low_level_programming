#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *
 *@head : pointer to a pointer to the head of the list
 *
 *Return : the head node’s data (n).
 */

int pop_listint(listint_t **head)
{

int d;

listint_t *temp;

if (*head == NULL || head == NULL)
return (0);

d = (*head)->n;
temp = (*head)->next;

free(*head);
*head = temp;

return (d);

}
