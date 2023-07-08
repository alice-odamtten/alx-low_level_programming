#include "hash_tables.h"

/**
 * hash_table_get - get the value of the key
 * @ht: the hash table to search from
 * @key: the key
 * Return: value associated with a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	hash_node_t *head;

	if (!ht || !key || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] && !strcmp(ht->array[i]->key, key))
		return (ht->array[i]->value);
	for (head = ht->array[i]; head; head = head->next)
	{
		if (!strcmp(head->key, key))
			return (head->value);
	}
	return (NULL);
}
