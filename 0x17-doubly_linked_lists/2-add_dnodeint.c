#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list.
 * @n: value that will be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_list = malloc(sizeof(dlistint_t));
if (new_list == NULL)
return (NULL);

new_list->n = n;
new_list->prev = NULL;
new_list->next = *head;
if (*head != NULL)
(*head)->prev = new_list;
*head = new_list;

return (new_list);
}
