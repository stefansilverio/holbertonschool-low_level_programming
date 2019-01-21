#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 *
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *curr = NULL, *new_node = NULL;

	new_node = NULL;

	for (; idx < (ht->size); idx++)
	{
		curr = ht->array[idx];
		if (!curr)
			continue;
		else
		{
			while (curr)
			{
				new_node = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = new_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
