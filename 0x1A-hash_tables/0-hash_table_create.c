#include "hash_tables.h"

/**
 * _calloc - Function that allocates memory for an array, using malloc.
 *
 * @nmemb: An unsigned integer as number of elements.
 * @size:  An unsigned integer as size of each element.
 *
 * Return: Void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, length;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

length = nmemb * size;
ptr = malloc(length);
if (ptr == NULL)
return (NULL);

for (i = 0; i < length; i++)
ptr[i] = 0;

return (ptr);
}

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: The size of the array
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);

table->size = size;
table->array = _calloc(table->size, sizeof(hash_node_t));
if (table->array == NULL)
{
free(table);
return (NULL);
}

for (i = 0; i < table->size; i++)
table->array[i] = NULL;

return (table);
}
