#include "main.h"

/**
 * _pow - function that calculates base and power
 * @base: base
 * @power: power
 *
 * Return: amt
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int n;
	unsigned long int amt;

	amt = 1;
	for (n = 1 ; n <= power ; n++)
		amt *= base;

	return (amt);
}

/**
 * print_binary - function that prints the binary rep of a number
 * @n: output
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	char m;
	unsigned long int p, c;

	m = 0;
	p = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (p != 0)
	{
		c = n & p;
		if (c == p)
		{
			m = 1;
			_putchar('1');
		}
		else if (m == 1 || p == 1)
		{
			_putchar('0');
		}
		p >>= 1;
	}
}
