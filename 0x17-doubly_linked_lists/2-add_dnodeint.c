#include "lists.h"

/**
 * add_dnodeint - function that adds new node at beginning of dlistint_t list
 * @head: A pointer to the head pointer of the list
 * @n: The data value for the new node
 *
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
