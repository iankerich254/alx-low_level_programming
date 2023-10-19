#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: first parameter
 * Return: size of a linked list
 */
size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 1; h->next != NULL; j++)
		{
			h = h->next;
		}
		return (j);
	}
}
