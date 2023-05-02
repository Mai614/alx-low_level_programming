#include "lists.h"
#include <stddef.h>
/**
 * reverse_listint - Reverses a linked list
 * @head:pointer to pointer to head of list
 *
 * Return: Pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL, *prev = NULL;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;

return (prev);

}
