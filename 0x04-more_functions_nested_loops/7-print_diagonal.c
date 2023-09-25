#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: char \ parameter to be printed
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;
		int p;

		for (m = 0 ; m < n ; m++)
		{
			for (p = 0 ; p < n ; p++)
			{
				if (p == m)
					_putchar('\\');
				else if (p < m)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
