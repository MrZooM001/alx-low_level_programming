#include "hash_tables.h"

/**
 * _strcmp - Compare two strings.
 * @s1: A pointer to character.
 * @s2: A pointer to character.
 *
 * Return: -1 if s1 < s2, 1 if s1 > s2, 0 if equals.
 */
int _strcmp(const char *s1, const char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

return (0);
}

/**
 * _strdup - Return a pointer to a newly allocated space in memory.
 * @str: A pointer to a character.
 *
 * Return: eturns a pointer to a new string
 * which is a duplicate of the string str.
 */
char *_strdup(const char *str)
{
int i, length;
char *arr;

if (str == NULL)
return (NULL);

length = 0;
while (*(str + length) != '\0')
{
length++;
}
arr = malloc(((length) *(sizeof(*arr))) + 1);
if (arr == NULL)
return (NULL);

for (i = 0; i < length; i++)
{
arr[i] = str[i];
}
arr[i] = '\0';

return (arr);
}

/**
 * _strcpy - copies the string pointed to in source.
 * @dest: Pointer to a string.
 * @src: Pointer to a string.
 *
 * Return: void.
 */
char *_strcpy(char *dest, const char *src)
{
int i;

for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';

return (dest);
}

/**
 * free_hash_node - free hash_node_t node.
 *
 * @node: node to be freed.
 *
 * Return: void
 */
void free_hash_node(hash_node_t *node)
{
free(node->key);
free(node->value);
free(node);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table that will be added or updated with key/value.
 * @key: a key of the hashed item.
 * @value: value for the key.
 *
 * Return: 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *current_node, *new_node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = hash_djb2((const unsigned char *)key) % ht->size;
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = _strdup(key);
new_node->value = _strdup(value);
if (new_node->key == NULL || new_node->value == NULL)
{
free_hash_node(new_node);
return (0);
}
new_node->next = ht->array[index];
if (ht->array[index] == NULL)
ht->array[index] = new_node;
else
{
current_node = ht->array[index];
while (current_node != NULL)
{
if (_strcmp(current_node->key, key) == 0)
{
free_hash_node(new_node);
current_node->value = _strdup(value);
if (current_node->value == NULL)
return (0);
return (1);
}
current_node = current_node->next;
}
ht->array[index] = new_node;
}
return (1);
}
