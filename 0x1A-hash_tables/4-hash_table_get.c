#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hash table that will be searched for key.
 * @key: a key to search for.
 *
 * Return: value associated with the element,
 * or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = hash_djb2((const unsigned char *)key) % ht->size;
node = ht->array[index];

if (node != NULL)
{
if (_strcmp(node->key, key) == 0)
{
return (node->value);
}
}
return (NULL);
}
