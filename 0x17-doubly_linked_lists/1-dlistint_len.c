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
