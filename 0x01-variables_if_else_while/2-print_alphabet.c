#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char t;

	t = 'a';

	while
	       (t <= 'z') {
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}