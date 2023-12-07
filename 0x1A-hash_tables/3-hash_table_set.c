#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: pointer to the hash table
* @key: key
* @value: value
* Return: 1 if it succeeds 0 if not
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_element, *temp;
unsigned long int index;

if (ht == NULL || key == NULL || value == NULL)
{
return (0);
}

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
if (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
temp->value = strdup(value);
return (1);
}
}

new_element = malloc(sizeof(hash_node_t));
if (new_element == NULL)
{
return (0);
}
new_element->key = strdup(key);
new_element->value = strdup(value);
new_element->next = NULL;

if (ht->array[index] != NULL)
{
	new_element->next = ht->array[index];
}
ht->array[index] = new_element;
return (1);
}
