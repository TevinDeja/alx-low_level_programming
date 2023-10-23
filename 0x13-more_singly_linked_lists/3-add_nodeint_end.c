#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: pointer
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *brand;
	listint_t *hold = *head;

	brand = malloc(sizeof(listint_t));

	if (!brand)
		return (NULL);

	brand->n = n;
	brand->next = NULL;

	if (*head == NULL)
	{
		*head = brand;
		return (brand);
	}
	while (hold->next)
		hold = hold->next;

	hold->next = brand;
	return (brand);
}
