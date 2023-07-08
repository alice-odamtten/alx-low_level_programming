#include "hash_tables.h"

/**
 * hash_djb2 - implement the algorithm
 *
 * @str: string used
 * Return: value of hash table
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
