#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * free_listint - A function to free listint_t list.
 * @head: A pointer to a pointer to a struct.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
if (head != NULL)
{
if (head->next != NULL)
{
free_listint(head->next);
}
free(head);
}
}
