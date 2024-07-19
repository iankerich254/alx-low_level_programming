#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, idx = 0;

	if (array == NULL)
		return (-1);

	while (array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		prev = idx;
		idx += step;
		if (idx >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, idx);
	for (size_t i = prev; i <= idx && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
