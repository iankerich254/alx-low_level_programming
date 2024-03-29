#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	if (!s1[i] || !s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

