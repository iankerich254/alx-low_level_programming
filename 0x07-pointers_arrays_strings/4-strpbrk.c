#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string input
 * @accept: character to check
 * Return: pointer to the byte in s that matches one of bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (0);
}

