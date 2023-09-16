#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list.
 * @idx: the index of required position.
 * @n: the value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current_node, *new_node;
unsigned int i;

if (idx == 0)
add_dnodeint(h, n);

if (*h == NULL)
return (NULL);

current_node = *h;
while (current_node->prev != NULL)
current_node = current_node->prev;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

for (i = 0; current_node != NULL; i++)
{
if (i == idx)
{
new_node->n = n;
new_node->prev = current_node->prev;
new_node->next = current_node;
new_node->prev->next = new_node;

*h = new_node;
return (new_node);
}
current_node = current_node->next;
}
return (NULL);
}
