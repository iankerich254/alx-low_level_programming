#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of a dlistint_t list
 * @index: index of the node to delete
 * Return: 1 upon success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_ke = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp_ke == NULL)
			return (-1);
		tmp_ke = tmp_ke->next;
	}

	if (tmp_ke == *head)
	{
		*head = tmp_ke->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp_ke->prev->next = tmp_ke->next;
		if (tmp_ke->next != NULL)
			tmp_ke->next->prev = tmp_ke->prev;
	}

	free(tmp_ke);
	return (1);
}
