#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - A function to sum of all the data (n)
 * of a listint_t linked list.
 * @head: A pointer to a struct.
 *
 * Return: Sum result.
 */
int sum_listint(listint_t *head)
{
int sum;
listint_t *node;

node = head;
for (sum = 0; node != NULL; node = node->next)
{
sum += node->n;
}

return (sum);
}
