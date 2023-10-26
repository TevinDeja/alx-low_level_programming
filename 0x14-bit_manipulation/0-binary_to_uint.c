#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: converted number or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int amt;

	amt = 0;
	if (!b)
		return (0);
	for (n = 0 ; b[n] != '\0' ; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		amt <<= 1;
		if (b[n] == '1')
			amt += 1;
	}
	return (amt);
}
