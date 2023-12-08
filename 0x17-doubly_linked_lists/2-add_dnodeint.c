#include "lists.h"

/**
 * add_dnodeint - adds a new_ke node at the beginning of a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * @n: integer for the new_ke node to contain
 * Return: NULL if function fails else address of new_ke node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ke;

	new_ke = malloc(sizeof(dlistint_t));
	if (new_ke == NULL)
		return (NULL);

	new_ke->n = n;
	new_ke->prev = NULL;
	new_ke->next = *head;
	if (*head != NULL)
		(*head)->prev = new_ke;
	*head = new_ke;

	return (new_ke);
}
