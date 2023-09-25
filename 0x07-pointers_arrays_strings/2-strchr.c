#include "main.h"
/**
 * _strchr - finds character in string
 * @s: string input
 * @c: character
 * Return: pointer to first occurrence of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	if (s[i] == '\0')
		p = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			p = s + i;
			break;
		}
		p = 0;
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		p = s + i;
	return (p);
}

