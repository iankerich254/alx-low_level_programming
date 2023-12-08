#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list
 * @head: head of a dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_ke;

	while (head)
	{
		tmp_ke = head->next;
		free(head);
		head = tmp_ke;
	}
}
