#include "lists.h"

/**
 * dlistint_len - get the number of elements in a linked dlistint_t list
 * @h: head of the list
 *
 * Return: length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
unsigned long i;

i = 1;
while (h != NULL)
{
h = h->next;
i++;
}

return (--i);
}

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
unsigned int i, node_len;

if (h == NULL)
return (NULL);

node_len = dlistint_len(*h);
if (idx == 0)
return (add_dnodeint(h, n));

if (idx == node_len)
return (add_dnodeint_end(h, n));
if (idx < 0 || idx > node_len)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

current_node = *h;
while (current_node->prev != NULL)
current_node = current_node->prev;
for (i = 0; current_node != NULL; i++)
{
if (i == idx)
{
new_node->n = n;
new_node->prev = current_node->prev;
new_node->next = current_node;
new_node->prev->next = new_node;
return (new_node);
}
current_node = current_node->next;
}
free_dlistint(new_node);
return (NULL);
}
