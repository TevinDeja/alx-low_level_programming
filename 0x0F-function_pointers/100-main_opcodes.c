#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes
 * @argc: no of arrguments
 * @argv: array of argumrnts
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int space, n;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	space = atoi(argv[1]);

	if (space < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char*)main;

	for (n = 0 ; n < space ; n++)
	{
		if (n == space - 1)
		{
			printf("%02hhx\n", s[n]);
			break;
		}
		printf("%02hhx ", s[n]);
	}
	return (0);
}
