#include "hash_tables.h"

/**
 * key_index - generate key for given index
 *
 * @key: key to hash
 *
 * @size: size of hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
