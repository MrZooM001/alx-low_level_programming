#include <stdio.h>
#include "search_algos.h"


/**
 * linear_skip - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: A pointer to the head of the skip list to search in
 * and sorted in ascending order.
 * @value: Value to search for.
 *
 * Return: NULL If value is not present in head or if head is NULL,
 * else pointer on the first node where value is located,
 * and print the value searched for.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node, *jump;

if (list == NULL)
{
return (NULL);
}

for (node = jump = list; jump->next != NULL && jump->n < value;)
{
node = jump;
if (jump->express != NULL)
{
jump = jump->express;
printf("Value checked at index [%ld] = [%d]\n",
jump->index, jump->n);
}
else
{
while (jump->next != NULL)
jump = jump->next;
}
}

printf("Value found between indexes [%ld] and [%ld]\n",
node->index, jump->index);

for (; node->index < jump->index && node->n < value; node = node->next)
{
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
}
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

return (node->n == value ? node : NULL);
}
