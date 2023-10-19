#include "lists.h"
int len(const char *str);
/**
 * add_node - creates a node and adds it to a linked list
 * @head: pointer to head of linked list
 * @str: string to be assigned to the node
 * Return: pointer to head of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;
	return (*head);
}
/**
 * len - calculates length of string
 * @str: constant string
 * Return: length of the string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
