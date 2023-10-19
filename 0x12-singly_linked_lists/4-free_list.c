#include "lists.h"

/**
 * free_list - function that frees a list_t
 * @head: pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
