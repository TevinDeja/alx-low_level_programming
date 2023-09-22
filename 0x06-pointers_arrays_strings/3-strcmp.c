#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: input 1
 * @s2: input 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
