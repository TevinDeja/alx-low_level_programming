#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: output value
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('_');
		m = -m;
	}
	if ((m / 10) > 0)
		print_number(m / 10);


	_putchar((m % 10) + '0');
}
