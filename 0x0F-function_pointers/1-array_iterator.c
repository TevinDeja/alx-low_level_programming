#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: elements to be printed
 * @action: pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0 ; n < size ; n++)
		action(array[n]);
}
