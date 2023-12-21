#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Hash table
 * @key: Key to add - cannot be empty
 * @value: Value to associate with key, must be duplicated
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (!key || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current && strcmp(current->key, key) != 0)
		current = current->next;
	if (current)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
