#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer
 *
 * Return: address of node where loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *m = head;
	listint_t *p = head;

	if (!head)
		return (NULL);

	while (m && p && p->next)
	{
		m = m->next;
		p = p->next->next;
		if (p == m)
		{
			m = head;
			while (m != p)
			{
				m = m->next;
				p = p->next;
			}
			return (p);
		}
	}
	return (NULL);
}
