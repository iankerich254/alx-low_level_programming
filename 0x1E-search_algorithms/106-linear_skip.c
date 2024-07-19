#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list using linear skip.
 * @list: Pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *prev = list;

	if (list == NULL)
		return (NULL);

	while (node && node->express && node->express->n < value)
	{
		prev = node;
		node = node->express;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}

	if (node && node->express && node->express->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->express->index, node->express->n);
		return (node->express);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);
	while (prev && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
