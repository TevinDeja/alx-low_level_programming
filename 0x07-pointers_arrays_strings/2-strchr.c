#include "main.h"

/**
 * strchr - function that locates a character in a string
 * @s: string value
 * @c: char value
 *
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int n;

	n = 0;
	for ( ; s[n] >= '\0' ; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}
