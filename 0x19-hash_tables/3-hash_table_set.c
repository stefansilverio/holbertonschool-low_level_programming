#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index;
	hash_node_t *curr, *new_node, *old_node;

	if (*key == '\0')
		return (0);

	if ((old_node = malloc(sizeof(hash_node_t))) == NULL)
		return (0);
	if ((curr = malloc(sizeof(hash_node_t))) == NULL)
		return (0);
	if ((new_node = malloc(sizeof(hash_node_t))) == NULL)
		return (0);

	hash = hash_djb2((const unsigned char*)key);
	index = hash % (ht->size);

	curr->key = (char*) strdup(key);
	curr->value = (char*) strdup(value);
	curr->next = NULL;

	if (ht->array[index] != 0)
	{
		new_node = ht->array[index];
		while (ht->array[index])
		{
			if ((strcmp(new_node->key, curr->key)) == 0)
			{
				ht->array[index]->value = curr->value;
				break;
			}
			ht->array[index] = ht->array[index]->next;
		}
		old_node = new_node->next; /* store reference */
		new_node = curr; /* set new_node as head */
		curr->next = old_node;
	}

	else
		ht->array[index] = curr;

	return (1);
}
