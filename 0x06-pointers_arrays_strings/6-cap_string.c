#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string value
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int count = 0;

	while (s[count])
	{
		while (!(s[count] >= 'a' && s[count] <= 'z'))
			count++;
		if (s[count - 1] == ' ' ||
		s[count - 1] == '\t' ||
		s[count - 1] == '\n' ||
		s[count - 1] == ',' ||
		s[count - 1] == ';' ||
		s[count - 1] == '.' ||
		s[count - 1] == '!' ||
		s[count - 1] == '?' ||
		s[count - 1] == '"' ||
		s[count - 1] == '(' ||
		s[count - 1] == ')' ||
		s[count - 1] == '{' ||
		s[count - 1] == '}' ||
		count == 0)
			s[count] -= 32;
		count++;
	}
	return (s);
}
