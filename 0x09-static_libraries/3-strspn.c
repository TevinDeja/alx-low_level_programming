#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string value
 * @accept: input value
 *
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int m;
int n;

m = 0;
while (*s)
{
for (n = 0 ; accept[n] ; n++)
{
if (*s == accept[n])
{
m++;
break;
}
else if (accept[n + 1] == '\0')
return (m);
}
s++;
}
return (m);
}
