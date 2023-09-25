#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string input
 * @accept: character to check
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] == '\0')
		return (i);
		i++;
	}
	return (0);
}

