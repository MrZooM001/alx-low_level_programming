#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given index.
 * @head: head of the list.
 * @index: the index of the node to be deleted.
 *
 * Return: 1 if success, 0 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *del_node;
unsigned int i;

if (*head == NULL)
return (-1);

del_node = *head;
while (del_node->prev != NULL)
del_node = del_node->prev;

if (index == 0)
*head = del_node->next;

for (i = 0; del_node && i < index; i++)
del_node = del_node->next;

if (del_node == NULL)
return (-1);

if (del_node->prev != NULL)
del_node->prev->next = del_node->next;
if (del_node->next != NULL)
del_node->next->prev = del_node->prev;

free(del_node);
return (1);
}
