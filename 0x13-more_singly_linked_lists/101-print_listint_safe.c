#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head, *next;
size_t count = 0;

while (current != NULL)
{
next = current->next;
printf("[%p] %d\n", (void *)&(*current), current->n);
count++;

if (current <= next)
{
printf("-> [%p] %d\n", (void *)&(*next), next->n);
break;
}

current = next;
}

if (current == NULL)
return (count);

exit(98);
}
