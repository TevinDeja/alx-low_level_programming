#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: A pointer to the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				printf("%s'%s': '%s'", comma, node->key, node->value);
				comma = ", ";
				node = node->next;
			}
		}
	}
	printf("}\n");
}
