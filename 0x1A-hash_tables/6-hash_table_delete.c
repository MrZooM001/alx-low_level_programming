#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table that will be printed.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
hash_node_t *tmp;

tmp = node;
node = node->next;
free(tmp->value);
free(tmp->key);
free(tmp);
}
}
free(ht->array);
free(ht);
}
