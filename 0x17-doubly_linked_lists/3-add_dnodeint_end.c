#include "lists.h"

/**
 * add_dnodeint_end - adds a new_ke node at the end of a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * @n: integer for the new_ke node to contain
 * Return: NULL if function fails else address of new_ke node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ke, *last;

	new_ke = malloc(sizeof(dlistint_t));
	if (new_ke == NULL)
		return (NULL);

	new_ke->n = n;
	new_ke->next = NULL;

	if (*head == NULL)
	{
		new_ke->prev = NULL;
		*head = new_ke;
		return (new_ke);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_ke;
	new_ke->prev = last;

	return (new_ke);
}
