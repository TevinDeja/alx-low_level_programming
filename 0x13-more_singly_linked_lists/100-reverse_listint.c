#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: pointer
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL;
	listint_t *p = NULL;

	while (*head)
	{
		p = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = p;
	}
	*head = m;
	return (*head);
}
