#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts number of unique nodes
 * @head: pointer
 *
 * Return: 0 if the list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *m, *p;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	m = head->next;
	p = (head->next)->next;
	while (p)
	{
		if (m == p)
		{
			m = head;
			while (m != p)
			{
				node++;
				m = m->next;
				p = p->next;
			}
			m = m->next;
			while (m != p)
			{
				node++;
				m = m->next;
			}
			return (node);
		}
		m = m->next;
		p = (p->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - function that prints a listint_t
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, x = 0;

	node = looped_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL ; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (x = 0 ; x < node ; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
