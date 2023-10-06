#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase.
 *
 * Return: Always 0
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while
	       (alpha <= 'z') {
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
