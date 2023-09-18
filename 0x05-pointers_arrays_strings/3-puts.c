#include "main.h"

/**
 * _puts - funtction that prints a string then a new line
 * @str: string parameter
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
