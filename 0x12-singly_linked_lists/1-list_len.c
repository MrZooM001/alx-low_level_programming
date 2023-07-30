#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * list_len - A function to return number of elements of list_t list.
 * @h: A const pointer to a struct.
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
const list_t *node;
size_t c;

c = 0;
node = h;
while (node != NULL)
{
node = node->next;
c++;
}

return (c);
}
