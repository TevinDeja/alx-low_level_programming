#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: string parameter
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int lengthi = 0;
	int n;

	while (*s != '\0')
	{
		lengthi++;
		s++;
	}
	s--;
	for (n = lengthi ; n > 0 ; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
