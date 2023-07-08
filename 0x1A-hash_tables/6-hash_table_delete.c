#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
