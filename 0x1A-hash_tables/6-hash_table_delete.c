#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int n;

	if (!ht)
		return;
	for (n = 0 ; n < ht->size ; n++)
	{
		if (ht->array[n])
		{
			node = ht->array[n];
			while (node)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
