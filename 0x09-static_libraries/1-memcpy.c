#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: storage memory
 * @src: source memory
 * @n: int value
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int m;
int p = n;

m = 0;
for ( ; m < p ; m++)
{
dest[m] = src[m];
n--;
}
return (dest);
}
