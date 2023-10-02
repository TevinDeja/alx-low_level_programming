#include  "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input 1
 * @s2: input 2
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = n = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;

	concat = malloc(sizeof(char) * (m + n + 1));

	if (concat == NULL)
		return (NULL);

	m = n = 0;
	while (s1[m] != '\0')
	{
		concat[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		concat[m] = s2[n];
		m++, n++;
	}
	concat[m] = '\0';
	return (concat);
}
