#include "lists.h"
/**
 * sum_listint - finds sum of all data of listint_t list
 * @head: pointer to head of listint_t list
 * Return: 0 if list is empty, else sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
