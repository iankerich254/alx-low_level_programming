#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t list __
 * @head: head of a dlistint_t list
 * @index: the node to locate __
 * Return: NULL if node does not exist else address of located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
