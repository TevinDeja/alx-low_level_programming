#include "main.h"

/**
 *  _isalpha - checks for alphabetic character
 *  @c: parameter to be checked
 *  Return: Always 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
