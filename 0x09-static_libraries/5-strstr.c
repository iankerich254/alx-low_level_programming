#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string input
 * @needle: substring to locate from haystack
 * Return: pointer to beginning of located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0, i = 0;
	char *p;

	if (needle[i] == '\0')
		p = haystack;
	while (haystack[i] && needle[j])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			p = haystack + i;
		else
			p = 0;
		i++;
	}
	return (p);
}

