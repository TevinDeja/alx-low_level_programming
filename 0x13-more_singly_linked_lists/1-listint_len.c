#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: a pointer
 *
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
