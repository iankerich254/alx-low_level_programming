#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using jump search.
 * @list: Pointer to the head of the list.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0;
	listint_t *node = list, *prev_node = list;

	if (list == NULL)
		return (NULL);

	while (node && node->n < value)
	{
		prev_node = node;
		for (size_t i = 0; node->next && i < step; i++)
			node = node->next;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev_node->index, node->index);
	while (prev_node && prev_node->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev_node->index, prev_node->n);
		if (prev_node->n == value)
			return (prev_node);
		prev_node = prev_node->next;
	}

	return (NULL);
}
