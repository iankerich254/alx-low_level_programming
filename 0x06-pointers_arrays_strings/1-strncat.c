#include "main.h"
/**
 * len - length of array
 * @i: function's parameter
 * Return: int
 */
int len(char *i)
{
	int a = 0;

	while (i[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * *_strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = len(dest);
	for (j = 0; (src[j] != '\0') && (j < n); ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';

	return (dest);
}

