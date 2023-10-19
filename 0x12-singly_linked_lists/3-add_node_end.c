#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: double pointer
 * @str: string
 *
 * Return: n
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *p = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (p->next)
		p = p->next;
	p->next = n;

	return (n);
}
