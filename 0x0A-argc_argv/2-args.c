#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
