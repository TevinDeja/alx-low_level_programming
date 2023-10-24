#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold = *head;
	listint_t *crnt = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (1);
	}
	while (m < index - 1)
	{
		if (!hold || !(hold->next))
			return (-1);
		hold = hold->next;
		m++;
	}
	crnt = hold->next;
	hold->next = crnt->next;
	free(crnt);

	return (1);
}
