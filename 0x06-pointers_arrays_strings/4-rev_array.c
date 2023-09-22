#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: array value
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0 ; m < n-- ; m++)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
