#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added
 * @n: node input
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nuevo;
	listint_t *hold = *head;
	unsigned int m;

	nuevo = malloc(sizeof(listint_t));

	if (!nuevo || !head)
		return (NULL);

	nuevo->n = n;
	nuevo->next = NULL;
	if (idx == 0)
	{
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}
	for (m = 0 ; hold && m < idx ; m++)
	{
		if (m == idx - 1)
		{
			nuevo->next = hold->next;
			hold->next = nuevo;
			return (nuevo);
		}
		else
			hold = hold->next;
	}
	return (NULL);
}
