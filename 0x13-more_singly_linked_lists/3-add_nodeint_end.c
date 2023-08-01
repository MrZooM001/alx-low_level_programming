#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - A function to add a new node
 * at the end of a listint_t list.
 * @head: A pointer to a pointer to a struct.
 * @n: An integer.
 *
 * Return: An address of new element, or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *current;

current = *head;
node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}

node->n = n;
node->next = NULL;
while (current != NULL && current->next != NULL)
{
current = current->next;
}
if (current != NULL)
{
current->next = node;
}
else
{
*head = node;
}

return (node);
}
