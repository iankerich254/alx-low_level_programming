#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to address of head of list, pointer to pointer?
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;

	return (*head);
}
