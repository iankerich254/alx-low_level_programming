#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: function's first parameter
 * @src: function's second parameter
 * @n: function's third parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

