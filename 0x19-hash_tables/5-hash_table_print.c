#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t  *new_node = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (; idx < (ht->size); idx++)
	{
		if ((ht->array[idx]) != 0)
		{
			new_node = ht->array[idx];

			while (new_node)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				flag = 1;
			}
		}
		else
			continue;
	}
	printf("}\n");
}
