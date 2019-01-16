 #include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if ((new_table = malloc(sizeof(hash_table_t))) == NULL) /* malloc for hash table */
		return NULL;

	if ((new_table->array = calloc(size, sizeof(hash_node_t*))) == NULL)
		return NULL;

	new_table->size = size;

	return (new_table);
}
