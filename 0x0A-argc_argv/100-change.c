#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints min no of coins to make change
 * @argc: no of arguments
 * @argv: array arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, cents;
	int results = 0, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (n = 0; n < 5; n++)
	{
		while (cents >= coins[n])
		{
			cents -= coins[n];
			results++;
		}
	}
	printf("%d\n", results);

	return (0);
}
