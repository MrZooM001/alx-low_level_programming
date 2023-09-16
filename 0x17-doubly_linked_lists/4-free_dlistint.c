#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *curr;

if (head == NULL)
return;

while (head->prev != NULL)
head = head->prev;
for (curr = head; curr != NULL; curr = curr->next)
{
dlistint_t *tmp = curr;
free(tmp);
}
head = NULL;
}
