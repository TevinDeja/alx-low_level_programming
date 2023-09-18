#include "main.h"

/**
 * swap_int - function that swaps values of two int
 * @a: int 1
 * @b: int 2
 *
 * Return: value
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
