#include "main.h"

/**
 * _pow_recursion - function returns value of x raised to power of y
 * @x: raised value
 * @y: power
 *
 * Return: results
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
