#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t list
 * @head: pointer to address of head of listint_t list
 * Return: 0 if linked list is empty, otherwise head of node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retn;

	if (*head == NULL)
		return (0);

	tmp = *head;
	retn = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (retn);
}

