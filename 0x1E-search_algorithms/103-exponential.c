#include <stdio.h>
#include "search_algos.h"

int binary_search_helper(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - Searches for a value in a sorted array using the exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t low = bound / 2;
	size_t high = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_helper(array, low, high, value));
}

/**
 * binary_search_helper - Helper function to perform binary search.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the subarray to search in.
 * @high: The ending index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
