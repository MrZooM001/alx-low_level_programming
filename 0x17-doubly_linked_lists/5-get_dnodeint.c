#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: the index of required node.
 *
 * Return: The required node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current_node;
unsigned int i;

if (head == NULL)
return (NULL);

current_node = head;

while (current_node->prev != NULL)
current_node = current_node->prev;

for (i = 0; current_node != NULL; i++)
{
if (i == index)
return (current_node);

current_node = current_node->next;
}

return (NULL);
}
