#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: o
 */

void print_array(int *a, int n)
{
	int a, n, lengthi;

	lengthi = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		lengthi++;
	n = (lengthi / 2);
	if ((lengthi % 2) == 1)
		n = ((lengthi + 1) / 2);
	for (a = n ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
