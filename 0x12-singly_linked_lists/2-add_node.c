#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function to add a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to a struct.
 * @str: A const pointer to character as string.
 *
 * Return: An address of new element, or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int length;

if (str == NULL)
{
return (NULL);
}
length = 0;
node = malloc(sizeof(list_t));
if (node == NULL)
{
free(node);
return (NULL);
}
node->str = strdup(str);
if (node->str == NULL)
{
free(node->str);
free(node);
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
node->len = length;
node->next = *head;
*head = node;

return (*head);
}
