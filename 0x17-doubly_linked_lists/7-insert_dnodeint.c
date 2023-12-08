#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new_ke node at a given position
 * @h: pointer to the head of a dlistint_t list
 * @idx: position to insert new_ke node
 * @n: integer for the new_ke node to contain
 * Return: NULL if function fails else address of the new_ke node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_ke;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_ke = malloc(sizeof(dlistint_t));
	if (new_ke == NULL)
		return (NULL);

	new_ke->n = n;
	new_ke->prev = tmp;
	new_ke->next = tmp->next;
	tmp->next->prev = new_ke;
	tmp->next = new_ke;

	return (new_ke);
}
