#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of listint_t list
 * @head: pointer to address of head of listint_t list, pointer to pointer?
 * @n: integer for the new node to contain
 * Return: NULL if function fails or address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

