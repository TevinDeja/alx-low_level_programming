#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int prime;
	long int n;

	prime = 612852475143;
	for (n = 2 ; n <= prime ; n++)
	{
		if (prime % n == 0)
		{
			prime /= n;
			n--;
		}
	}
	printf("%ld\n", n);
	return (0);
}
