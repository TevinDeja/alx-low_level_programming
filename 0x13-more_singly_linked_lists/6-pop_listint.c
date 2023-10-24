#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer
 *
 * Return: if linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (m);
}
