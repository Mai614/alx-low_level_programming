#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void add_nodes(listint_t **head);
void print_list(listint_t *head);
void delete_nodes(listint_t **head);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
listint_t *head = NULL;

add_nodes(&head);
print_list(head);
printf("-----------------\n");
delete_nodes(&head);
print_list(head);

return (0);
}

/**
 * add_nodes - adds nodes to the list
 *
 * @head: pointer to the head pointer of the list
 */
void add_nodes(listint_t **head)
{
add_nodeint_end(head, 0);
add_nodeint_end(head, 1);
add_nodeint_end(head, 2);
add_nodeint_end(head, 3);
add_nodeint_end(head, 4);
add_nodeint_end(head, 98);
add_nodeint_end(head, 402);
add_nodeint_end(head, 1024);
}

/**
 * print_list - prints the list
 *
 * @head: pointer to the head of the list
 */
void print_list(listint_t *head)
{
while (head)
{
printf("%d\n", head->n);
head = head->next;
}
}

/**
 * delete_nodes - deletes nodes from the list
 *
 * @head: pointer to the head pointer of the list
 */
void delete_nodes(listint_t **head)
{
delete_nodeint_at_index(head, 5);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
delete_nodeint_at_index(head, 0);
}
