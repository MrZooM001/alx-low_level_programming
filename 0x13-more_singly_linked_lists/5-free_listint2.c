#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_listint2 - A function to free listint_t list.
 * @head: A pointer to a pointer to a struct.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
listint_t *node;
listint_t *current;

if (head != NULL)
{
node = *head;
while (node != NULL)
{
current = node;
node = node->next;
free(current);
}
*head = NULL;
}
}
