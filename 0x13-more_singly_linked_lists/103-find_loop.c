#include "lists.h"
/**
 * find_listint_loop - finds a loop in a listint_t linked list
 * @head: pointer to head of listint_t list
 * Return: NULL if no loop, else address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (NULL);
}

