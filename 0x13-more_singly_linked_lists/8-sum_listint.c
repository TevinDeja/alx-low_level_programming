#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of a listint_t
 * @head: first node
 *
 * Return: if list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *hold = head;
	int data = 0;

	while (hold)
	{
		data += hold->n;
		hold = hold->next;
	}
	return (data);
}
