#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function to returns the nth node
 * of a listint_t linked list.
 * @head: A pointer to a pointer to a struct.
 * @index: An unsigned integer.
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
unsigned int n;

n = 0;
while (n != index)
{
head = head->next;
if (head == NULL)
{
return (NULL);
}

n++;
}

return (head);
}
