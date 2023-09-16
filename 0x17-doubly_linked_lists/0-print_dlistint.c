#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
unsigned long i;

i = 1;
while (h->prev != NULL)
{
h = h->prev;
}

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}

return (--i);
}
