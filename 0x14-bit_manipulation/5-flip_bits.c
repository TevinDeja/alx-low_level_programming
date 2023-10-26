#include "main.h"

/**
 * flip_bits - function that returns number of bits you would need to flip
 * @n: first input
 * @m: second input
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, counter = 0;
	unsigned long int t;
	unsigned long int ex = n ^ m;

	for (p = 63; p >= 0 ; p--)
	{
		t = ex >> p;
		if (t & 1)
			counter++;
	}
	return (counter);
}
