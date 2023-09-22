#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string value
 *
 * Return: s
 */

char *rot13(char *s)
{
	int m;
	int n;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (m = 0 ; s[m] != '\0' ; m++)
	{
		for (n = 0 ; n < 52 ; n++)
		{
			if (s[m] == alphabet[n])
			{
				s[m] = rot13[n];
				break;
			}
		}
	}
	return (s);
}
