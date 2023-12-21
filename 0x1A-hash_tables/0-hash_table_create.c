#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: Size of the hash table array
 *
 * Return: Pointer to newly created hash table, or NULL on failure
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int n;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (n = 0 ; n < size ; n++)
		table->array[n] = NULL;
	return (table);
}
