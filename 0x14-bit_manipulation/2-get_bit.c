#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: bits checker
 * @index: index of bits
 *
 * Return: value of bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bits = 1 << index;
	checker = n & bits;
	if (checker == bits)
		return (1);

	return (0);
}
