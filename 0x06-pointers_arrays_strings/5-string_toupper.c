#include "main.h"
/**
 * string_toupper - converts strings to uppercase
 * @s: string parameter
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + 'A' - 'a';
	}
	return (s);
}

