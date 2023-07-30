#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_list - A function to print all element of list struct.
 * @h: A pointer to a struct.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
list_t *node;
size_t c;

c = 0;
node = h;
while (node != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
node = node->next;
c++;
}

return (c);
}
