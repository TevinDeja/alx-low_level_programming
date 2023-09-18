#include "main.h"

/**
 * _strcpy - function that copies the pointed strings
 * @dest: copy to destination
 * @src: copy from source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; m < n ; m++)
	{
		dest[m] = src[m];
	}
	dest[n] = '\0';
	return (dest);
}
