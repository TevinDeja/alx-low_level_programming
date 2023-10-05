#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int m = 0, p = 0, r = 0, t = 0;

	while (s1 && s1[r])
		r++;
	while (s2 && s2[t])
		t++;

	if (n < t)
		s = malloc(sizeof(char) * (r + n + 1));
	else
		s = malloc(sizeof(char) * (r + t + 1));
	if (!s)
		return (NULL);

	while (m < r)
	{
		s[m] = s1[m];
		m++;
	}
	while (n < t && m < (m + n))
		s[m++] = s2[p++];
	while (n >= t && m < (r + t))
		s[m++] = s2[p++];

	s[m] = '\0';
	return (s);

}

