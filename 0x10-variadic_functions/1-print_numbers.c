#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string output
 * @n: no of integer input
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nos;
unsigned int m;

va_start(nos, n);

for (m = 0 ; m < n ; m++)
{
printf("%d", va_arg(nos, int));

if (m != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nos);
}
