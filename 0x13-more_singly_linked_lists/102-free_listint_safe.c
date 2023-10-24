#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t
 * @h: pointer to the first node
 *
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *hold;
	size_t length = 0;
	int m;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		m = *h - (*h)->next;
		if (m > 0)
		{
			hold = (*h)->next;
			free(*h);
			*h = hold;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
