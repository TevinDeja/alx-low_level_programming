#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input parameter
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int p, sum;

	sum = 0;
	va_start(m, n);

	for (p = 0 ; p < n ; p++)
		sum += va_arg(m, int);

	va_end(m);
	return (sum);
}
