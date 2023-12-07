#include "lists.h"

/**
 * print_dlistint - function that prints all elements of a dlistint_t list
 * @h: The head of the dlistint_t list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	while (current)
	{
		nodes++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (nodes);
}
