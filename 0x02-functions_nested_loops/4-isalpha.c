#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 *  Return: Always 0
 */

int _isaplha(int c)
{
	return ((c >= "a" && c <= "z") || (c >= "A" && c <= "Z"));
}