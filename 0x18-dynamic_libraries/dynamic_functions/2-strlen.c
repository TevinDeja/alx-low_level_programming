#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string parameter
 *
 * Return: lengthi
 */

int _strlen(char *s)
{
int lengthi = 0;

while (*s != '\0')
{
lengthi++;
s++;
}
return (lengthi);
}
