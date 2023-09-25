#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: triangle size
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int m;
	int n;

	if (size > 0)
	{
		for (m = 1 ; m <= size ; m++)
		{
			for (n = size - m ; n > 0 ; n--)
			{
				_putchar(' ');
			}
			for (n = 0 ; n < m ; n++)
			{
				_putchar('#');
			}
			if (m == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
