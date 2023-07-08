#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int i = 0;
	char *v = NULL;
	hash_node_t *newnode = NULL;
	hash_node_t *head = NULL;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	v = strdup(value);
	if (!v)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] && !strcmp(ht->array[i]->key, key))
	{
		free(ht->array[i]->value);
		ht->array[i]->value = v;
		return (1);
	}
	for (head = ht->array[i]; head; head = head->next)
	{
		if (!strcmp(head->key, key))
		{
			free(head->value);
			head->value = v;
			return (1);
		}
	}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	if (!newnode->key)
		return (0);
	newnode->value = v;
	newnode->next = ht->array[i];
	ht->array[i] = newnode;
	return (1);
}
