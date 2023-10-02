#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: input
 * @av: array
 *
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int m, n, p, q;

	p = 0;
	q = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0 ; m < ac ; m++)
	{
		for (n = 0 ; av[m][n] ; n++)
			q++;
	}
	q += ac;

	s = malloc(sizeof(char) * (q + 1));

	if (s == NULL)
		return (NULL);
	for (m = 0 ; m < ac ; m++)
	{
		for (n = 0 ; av[m][n] ; n++)
		{
			s[p] = av[m][n];
			p++;
		}
		if (s[p] == '\0')
		{
			s[p++] = '\0';
		}
	}
	return (s);
}
