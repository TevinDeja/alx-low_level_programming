#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: no of arguments
 * @argv: array arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, n, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n]; n++)
		{
			if (!(isdigit(argv[m][n])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}
