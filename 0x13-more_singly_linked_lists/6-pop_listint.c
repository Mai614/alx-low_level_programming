#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head : pointer to a pointer to the head of the list
 *
 *Return: the head node’s data (n).
 *if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{

int d;

listint_t *tmp;

if (*head == NULL || head == NULL)
{
return (0);
}

d = (*head)->n;
tmp = (*head)->next;

free(*head);
*head = tmp;

return (d);

}
