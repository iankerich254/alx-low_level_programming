#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: function's first parameter
 * @b: function's second parameter
 * @n: function's third parameter
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}

