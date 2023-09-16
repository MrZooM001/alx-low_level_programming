#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data (n) of a dlistint_t linked list.
 * @head: head of the list.
 *
 * Return: The sum of all data (n), or 0 if empty list.
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current_node;
int i, sum;

if (head == NULL)
return (0);

current_node = head;

while (current_node->prev != NULL)
current_node = current_node->prev;

sum = 0;
for (i = 0; current_node != NULL; i++)
{
sum += current_node->n;
current_node = current_node->next;
}

return (sum);
}
