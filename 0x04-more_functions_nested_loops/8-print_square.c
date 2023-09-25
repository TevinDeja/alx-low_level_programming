#include "main.h"

/**
 * print_square - function that prints a square
 * @size: square size
 *
 * Return: 0
 */

void print_square(int size)
{
	int m;
	int n;

	n = 0;
	if (size < 1)
		_putchar('\n');

	while (n < size)
	{
		m = 0;

		while (m < size)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
