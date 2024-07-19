#include <stdio.h>
#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t low, size_t high, int value);

/**
 * advanced_binary - Searches for a value in a sorted array using an advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Helper function to perform advanced binary search recursively.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the subarray to search in.
 * @high: The ending index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (size_t i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_recursive(array, low, mid, value));
	return (advanced_binary_recursive(array, mid + 1, high, value));
}
