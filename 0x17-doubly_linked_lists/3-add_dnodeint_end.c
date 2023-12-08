#include "lists.h"

/**
 * add_dnodeint_end - function adds new node at the end of dlistint_t list
 * @head: A pointer to the head pointer of the list
 * @n: The data value for the new node
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}
