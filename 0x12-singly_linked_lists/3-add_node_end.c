#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function to add a new node at the end of a list_t list.
 * @head: A pointer to a pointer to a struct.
 * @str: A const pointer to character as string.
 *
 * Return: An address of new element, or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current_node;
unsigned int length;

if (str == NULL)
return (NULL);

length = 0;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (str[length] != '\0')
length++;

new_node->len = length;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
current_node = *head;
while (current_node->next != NULL)
{
current_node = current_node->next;
}
current_node->next = new_node;
}

return (new_node);
}
