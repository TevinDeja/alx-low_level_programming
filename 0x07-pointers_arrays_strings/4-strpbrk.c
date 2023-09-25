#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string value
 * @accept: input value
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0 ; accept[n] ; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}
