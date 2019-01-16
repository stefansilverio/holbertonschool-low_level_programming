#include "hash_tables.h"

/**
 * hash_table_get - retireve value w/ key
 *
 * @ht: hash table
 *
 * @key: key to hash
 *
 * Return: value of key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	int index = 0;

	if ((ht == NULL) || (key == NULL))
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % (ht->size);

	if (ht->array[index] == 0)
		return (NULL);
	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
