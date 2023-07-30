#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - A function to print all element of list_t list.
 * @h: A pointer to a struct.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t c;

c = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)");
}
h = h->next;
c++;
}

return (c);
}
