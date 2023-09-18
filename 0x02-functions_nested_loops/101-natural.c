#include <stdio.h>

/**
 * main - program that prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int sum;
	int n;

	sum = 0;

	for (n = 0 ; n < 1024 ; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d", sum);
}
