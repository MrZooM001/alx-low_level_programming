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
 * free_shash_node - free hash_node_t node.
 *
 * @node: node to be freed.
 *
 * Return: void
 */
void free_shash_node(shash_node_t *node)
{
if (node->key != NULL)
free(node->key);
if (node->value != NULL)
free(node->value);
if (node != NULL)
free(node);
}

/**
 * shash_table_create - function that creates a hash table.
 *
 * @size: The size of the array
 *
 * Return: a pointer to the newly created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *table;
unsigned long int i;

table = malloc(sizeof(shash_table_t));
if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc(size * sizeof(shash_node_t *));
if (table->array == NULL)
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = NULL;

table->shead = NULL;
table->stail = NULL;

return (table);
}

/**
 * shash_table_set - adds an element to the hash table.
 *
 * @ht: hash table that will be added or updated with key/value.
 * @key: a key of the hashed item.
 * @value: value for the key.
 *
 * Return: 1 if success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *current_node, *new_node;
unsigned long int index;
char *tmp_value;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
tmp_value = _strdup(value);
if (tmp_value == NULL)
return (0);
current_node = ht->shead;
while (current_node)
{
if (_strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = tmp_value;
return (1);
}
current_node = current_node->snext;
}
new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
{
free(tmp_value);
return (0);
}
new_node->key = _strdup(key);
if (new_node->key == NULL)
{
free(new_node);
free(tmp_value);
return (0);
}
new_node->next = ht->array[index];
new_node->value = tmp_value, ht->array[index] = new_node;
if (ht->shead == NULL)
{
new_node->snext = NULL, new_node->sprev = NULL;
ht->shead = new_node, ht->stail = new_node;
}
else if (_strcmp(ht->shead->key, key) > 0)
{
new_node->sprev = NULL, new_node->snext = ht->shead;
ht->shead->sprev = new_node, ht->shead = new_node;
}
else
{
current_node = ht->shead;
while (current_node->snext != NULL
&& _strcmp(current_node->snext->key, key) < 0)
current_node = current_node->snext;
new_node->snext = current_node->snext, new_node->sprev = current_node;
if (current_node->snext == NULL)
ht->stail = new_node;
else
current_node->snext->sprev = new_node;
current_node->snext = new_node;
}
return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 *
 * @ht: hash table that will be searched for key.
 * @key: a key to search for.
 *
 * Return: value associated with the element,
 * or NULL if key not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *node;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);

node = ht->shead;
while (node != NULL
&& _strcmp(node->key, key) != 0)
{
node = node->snext;
}
if (node == NULL)
return (NULL);
else
return (node->value);
}

/**
 * shash_table_print - prints a hash table.
 *
 * @ht: hash table that will be printed.
 *
 * Return: void.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
return;

node = ht->shead;

printf("{");
while (node != NULL)
{
printf("\'%s\': \'%s\'", node->key, node->value);
node = node->snext;
if (node != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse order.
 *
 * @ht: hash table that will be printed.
 *
 * Return: void.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
return;

node = ht->stail;

printf("{");
while (node != NULL)
{
printf("\'%s\': \'%s\'", node->key, node->value);
node = node->sprev;
if (node != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_delete - delete hash table
 *
 * @ht: hash table that will be deleted.
 *
 * Return: void.
 */
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *head;
shash_node_t *node, *tmp;

if (ht == NULL)
return;

head = ht;
node = ht->shead;
while (node)
{
tmp = node->snext;
free_shash_node(node);
node = tmp;
}

free(head->array);
free(head);
}
