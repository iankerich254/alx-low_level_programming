#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of listint_t list
 * @head: pointer to address of the head of listint_t list,pointer to pointer?
 * @n: integer for the new node to contain
 * Return: NULL if function fails, else address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}

