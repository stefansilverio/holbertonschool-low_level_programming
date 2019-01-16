#include "hash_tables.h"

/**
 * hash_table_set - set new node in hash table
 *
 * @ht: hash table
 *
 * @key: key to hash
 *
 * @value: value to store
 *
 * Return: exit status
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index;
	hash_node_t *curr, *mov;

	if (*key == '\0')
		return (0);
	curr = malloc(sizeof(hash_node_t));
	if (curr == NULL)
		return (0);
	mov = malloc(sizeof(hash_node_t));
	if (mov == NULL)
		return (0);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % (ht->size);
	curr->key = (char *) strdup(key);
	curr->value = (char *) strdup(value);
	curr->next = NULL;

	if (ht->array[index] != 0)
	{
		mov = ht->array[index];
		while (mov)
		{
			if ((strcmp(mov->key, curr->key)) == 0)
			{
				mov->value = strdup(value);
				/* free stuff */
				return (1);
			}
			mov = mov->next;
		}
		mov = ht->array[index];
		ht->array[index] = curr; /* set new_node as head */
		curr->next = mov;
	}
	else
		ht->array[index] = curr;

	return (1);
}
