#include <unistd.h>

/**
 * _putchar - write the character of c
 * 0c: The characer is printed
 *
 * Return: 1 success
 * On error -1 is returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
