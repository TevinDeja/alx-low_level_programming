#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump Search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present in the array or the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	size_t step = sqrt(size);
	size_t prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%zu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			return -1;
	}
	while (array[prev] < value)
	{
		printf("Value checked array[%zu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return -1;
	}
	if (array[prev] == value)
	{
		printf("Value found between indexes [%zu] and [%zu]\n", prev - step, prev);
		return prev;
	}
	return -1;
}
