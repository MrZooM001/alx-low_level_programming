#include "hash_tables.h"

/**
 * get_last_element - get an index of the last element in a hash table.
 *
 * @ht: hash table to search in.
 *
 * Return: index of the last element, 0 otherwise.
 */
unsigned long int get_last_element(const hash_table_t *ht)
{
unsigned long int i, index;
hash_node_t *node;

if (ht == NULL || ht->array == NULL)
return (0);

index = 0;
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
index = key_index((const unsigned char *)node->key, ht->size);
node = node->next;
}
}

return (index);
}

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table that will be printed.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, index, current_idx;
hash_node_t *node;

if (ht == NULL || ht->array == NULL)
return;

index = get_last_element(ht);

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
current_idx = key_index((const unsigned char *)node->key, ht->size);
printf("\'%s\': \'%s\'", node->key, node->value);
if (current_idx != index)
{
printf(", ");
}
node = node->next;
}
}
printf("}\n");
}
