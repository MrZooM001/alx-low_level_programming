#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all elements of a listint_t list.
 * @h: A pointer to a struct.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}

return (i);
}
