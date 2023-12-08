#include "lists.h"

/**
 * dlistint_len - function returns no of elements in linked dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (nodes);
	while (current->prev)
		current = current->prev;
	while (current)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
