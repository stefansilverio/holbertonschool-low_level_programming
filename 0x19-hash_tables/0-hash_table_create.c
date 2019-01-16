 #include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of hash table
 *
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = calloc(size, sizeof(hash_node_t *));

	if (new_table->array == NULL)
		return (NULL);

	new_table->size = size;

	return (new_table);
}
