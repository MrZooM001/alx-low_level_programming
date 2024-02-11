#include <stdio.h>
#include <math.h>
#include "search_algos.h"


/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: A pointer to the head of the list to search in
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: NULL If value is not present in head or if head is NULL,
 * else print the value searched for.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
listint_t *node, *jump;
size_t step, step_size;

if (list == NULL || size == 0)
{
return (NULL);
}

step = 0;
step_size = sqrt(size);
for (node = jump = list; jump->index + 1 < size && jump->n < value;)
{
node = jump;
for (step += step_size; jump->index < step; jump = jump->next)
{
if (jump->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
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
