#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: string value
 * @b: char value
 * @n: int value
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int m;

m = 0;
for ( ; n > 0 ; m++)
{
s[m] = b;
n--;
}
return (s);
}
