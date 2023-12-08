#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns nth node of a dlistint_t
 * @head: pointer to the head of the dlist
 * @index: index of the node, starting from 0
 *
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
