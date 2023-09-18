#include "main.h"

/**
 * puts2 - function that prints only one char out of two
 * @str: string parameter
 *
 * Return: 0
 */

void puts2(char *str)
{
	int lengthi = 0;
	int n = 0;
	char *m = str;
	int o;

	while (*m != '\0')
	{
		m++;
		lengthi++;
	}
	n = lengthi = 1;
	for (o = 0 ; o <= n ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
