#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string output
 * @n: integer input
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list m;
	char *s;
	unsigned int p;

	va_start(m, n);

	for (p = 0 ; p < n ; p++)
	{
		s = va_arg(m, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
