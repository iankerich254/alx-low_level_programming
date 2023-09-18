#include "main.h"
/**
 * rev_string - string reversal function
 * @s: the parameter
 * Return: none
 */
void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}
	b--;
	while (b > a)
	{
		c = s[b];
		s[b--] = s[a];
		s[a++] = c;
	}
}

