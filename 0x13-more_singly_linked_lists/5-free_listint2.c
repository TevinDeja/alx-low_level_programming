#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while (*head)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	head = NULL;
}
