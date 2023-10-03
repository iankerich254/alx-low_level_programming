#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: first parameter
 * @c: second parameter
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s[i] == '\0'; i++)
			{
				s[i] = c;
			}
			return (s);
		}
	}
}

