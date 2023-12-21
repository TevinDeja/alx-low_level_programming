#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: The key to get index of
 * @size: Size of hash table
 *
 * Return: Index at which key/value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
