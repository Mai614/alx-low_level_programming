#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - a function that returns the sum of all the
 *data (n) of a listint_t linked list
 *@head: pointer to the head of list
 *
 *Return: the sum of the list
 */

int sum_listint(listint_t *head)
{
int sum = 0;
int d = 0;
if (head == NULL)
return (0);

while (head != NULL)
{
d = head->n;
sum += d;
head = head->next;
}

return (sum);
}
