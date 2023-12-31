#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list.
 * @n: value that will be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_list = malloc(sizeof(dlistint_t));
if (new_list == NULL)
return (NULL);

new_list->n = n;
new_list->next = NULL;
if (*head == NULL)
{
new_list->prev = NULL;
*head = new_list;
return (new_list);
}
while ((*head)->next != NULL)
*head = (*head)->next;
(*head)->next = new_list;
new_list->prev = *head;

return (new_list);
}
