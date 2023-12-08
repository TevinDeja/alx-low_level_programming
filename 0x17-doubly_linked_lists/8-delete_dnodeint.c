#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the dlist
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int m = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && m < index)
	{
		current = current->next;
		m++;
	}
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;

	free(current);
	return (1);
}
