#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the table
 * Return: pointer to a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ntable;

	ntable = malloc(sizeof(hash_table_t));
	if (ntable == NULL)
		return (NULL);
	ntable->size = size;
	ntable->array = malloc(sizeof(hash_node_t *) * size);
	if (ntable->array == NULL)
		return (NULL);
	return (new_table);
}
