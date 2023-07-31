#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_list - A function to free list_t list.
 * @head: A pointer to a pointer to a struct.
 *
 * Return: Void.
 */
void free_list(list_t *head)
{
if (head != NULL)
{
if (head->next != NULL)
{
free_list(head->next);
}
free(head->str);
free(head);
}
}
