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

	new_node = ht->array[idx];
	curr = new_node;

	while (idx < (ht->size))
	{
		idx++;
		if ((curr) == 0)
			continue;
		else
		{
			while (curr)
			{
				new_node = curr->next;
				free(curr);
				curr = new_node;
			}
		}
	}
	free(ht);
}
