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
 * *_strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = len(dest);
	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';

	return (dest);
}

