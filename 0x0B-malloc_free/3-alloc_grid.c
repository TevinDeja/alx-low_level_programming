#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer 2 dimensional array of integers
 * @width: width input
 * @height: height input
 *
 * Return: dime
 */

int **alloc_grid(int width, int height)
{
	int **dime;
	int m, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	dime = malloc(sizeof(int *) * height);

	if (dime == NULL)
		return (NULL);

	for (m = 0 ; m < height ; m++)
	{
		dime[m] = malloc(sizeof(int) * width);

		if (dime[m] == NULL)
		{
			for (; m >= 0 ; m--)
				free(dime[m]);
			free(dime);
			return (NULL);
		}
	}
	for (m = 0 ; m < height ; m++)
	{
		for (p = 0 ; p < width ; p++)
			dime[m][p] = 0;
	}
	return (dime);
}
