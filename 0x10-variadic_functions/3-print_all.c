#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int n = 0;
	char *s, *m = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", m, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", m, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", m, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", m, s);
					break;
				default:
					n++;
					continue;
			}
			m = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(list);
}
