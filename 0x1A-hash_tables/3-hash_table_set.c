#include "hash_tables.h"

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
new_node->next = NULL;

if (new_node->key == NULL || new_node->value == NULL)
return (0);

if (ht->array[index] == NULL)
ht->array[index] = new_node;
else
{
current_node = ht->array[index];
while (current_node != NULL)
{
if (_strcmp(current_node->key, key) == 0)
{
current_node->value = _strdup(value);
if (current_node->value == NULL)
return (0);
return (1);
}

current_node = current_node->next;
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
}

return (1);
}
