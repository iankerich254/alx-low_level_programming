#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates the string str and returns a pointer to new string
 * @str: string to duplicate
 * Return: pointer to copy of string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(sizeof(char) * i + 1);
	i = 0;
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

