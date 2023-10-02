#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function returns a pointer to newly allocated space in memory
 * @str: char parameter
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	int m, n;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	s = malloc(sizeof(char) * (m + 1));

	if (s == NULL)
		return (NULL);
	for (n = 0 ; str[n] ; n++)
		s[n] = str[n];
return (s);
}
