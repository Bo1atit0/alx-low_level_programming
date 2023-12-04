#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
*
* @size: size of the array
* Return: pointer to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable = NULL;

	if (size == 0)
	{
	return (NULL);
	}
	newtable = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
	return (NULL);
	}

	newtable->size = size;
	newtable->array = (hash_node_t **)malloc(sizeof(hash_node_t *));
	if (newtable->array == NULL)
	{
	free(newtable);
	return (NULL);
	}
	return (newtable);
}
