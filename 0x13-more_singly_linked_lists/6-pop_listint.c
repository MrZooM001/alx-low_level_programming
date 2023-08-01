#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * pop_listint - A function to deletes the head node
 * of a listint_t linked list.
 * @head: A pointer to a pointer to a struct.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int n;

node = *head;
if (node == NULL)
{
return (0);
}
n = node->n;
*head = node->next;
free(node);

return (n);
}
