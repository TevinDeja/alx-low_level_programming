#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i, j, results;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			results = i * j;
			if (j == 0)
				printf("%d, ", results);
			else
			{
				printf("%2d", results);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
