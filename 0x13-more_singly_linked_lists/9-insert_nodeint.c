#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - A function to inserts a new node
 * at a given position.
 * @head: A pointer to a struct.
 * @idx: An unsigned integer.
 * @n: An integer
 *
 * Return:  Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current_node;
listint_t *new_node;
unsigned int i;

i = 0;
if (head == NULL)
return (NULL);

current_node = *head;
if (current_node == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (i != (idx - 1))
{
current_node = current_node->next;
if (current_node == NULL)
{
free(new_node);
return (NULL);
}
i++;
}
new_node->next = current_node->next;
current_node->next = new_node;

return (new_node);
}
