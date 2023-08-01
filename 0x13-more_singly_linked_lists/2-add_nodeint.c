#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function to add a new node
 * at the beginning of a listint_t list.
 * @head: A pointer to a pointer to a struct.
 * @n: An integer.
 *
 * Return: An address of new element, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
node->next = *head;
*head = node;

return (node);
}
