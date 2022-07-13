#include "main.h"
/**
 * *string_toupper - converts strings to uppercase
 * @s: first parameter
 * Return: string capitalized
 */
char *string_toupper(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + 'A' - 'a';
		}
	}
	return (s);
}
