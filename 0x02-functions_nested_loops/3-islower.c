#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: parameter to be checked
 * Return: Always 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
