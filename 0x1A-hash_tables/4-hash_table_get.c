#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value from the hash table
* @ht: pointer to the hash table to look into
* @key: key your're looking for
* Return: value or Null if key not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *element = NULL;

if (key == NULL || ht == NULL)
{
return (NULL);
}
index = key_index((const unsigned char *)key, ht->size);
element = ht->array[index];

while (element)
{
	if (strcmp(key, element->key) == 0)
	{
	return (element->value);
	}
	element = element->next;
}

return (NULL);
}
