#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: first node
 * @index: index node
 *
 * Return: if node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hold = head;
	unsigned int m = 0;

	while (hold && m < index)
	{
		hold = hold->next;
		m++;
	}
	return (hold ? hold : NULL);
}
