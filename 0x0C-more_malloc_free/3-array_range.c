#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min range
 * @max: max range
 *
 * Return: m
 */

int *array_range(int min, int max)
{
	int *m;
	int n, p;

	if (min > max)
		return (NULL);

	p = max - min + 1;

	m = malloc(sizeof(int) * p);

	if (m == NULL)
		return (NULL);
	for (n = 0; min <= max; n++)
		m[n] = min++;

	return (m);
}
