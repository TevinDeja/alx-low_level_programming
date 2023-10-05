#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: allocated memory for pointer
 * @new_size: new size allocated
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr1;
	char *old_pntr;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	pntr1 = malloc(new_size);

	if (!pntr1)
		return (NULL);

	old_pntr = ptr;
	if (new_size < old_size)
	{
		for (n = 0; n < new_size; n++)
			pntr1[n] = old_pntr[n];
	}
	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
			pntr1[n] = old_pntr[n];
	}
	free(ptr);
	return (pntr1);
}
